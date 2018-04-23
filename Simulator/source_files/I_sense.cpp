
#include <cstdlib>
#include <iostream>

#include "../header_files/Bug.h"
#include "../header_files/World.h"
#include "../header_files/Structs.h"
#include "../header_files/I_headers.h"

using namespace std;

enum conds{Friend = 0, Foe, FriendWithFood, FoeWithFood, Food, Rock, Marker_flag, FoeMarker, Home, FoeHome};

enum dirs{Here = 0, Ahead, LeftAhead, RightAhead};

I_sense::I_sense(World *w) : Instruction(w){}

void I_sense::execute(Bug *b){
  Cell *temp = NULL;
  tdirection dir = b->get_direction();
  bool confirm = false;
  switch (this->dir.sensedir) {
    case Here:
      temp = world->getCell(b->get_position());
      break;
    case Ahead:
      temp = world->getCell(w->adjacent(b->get_position(), dir));
      break;
    case LeftAhead:
      dir.direction = (dir.direction + 5) % 6;
      temp = world->getCell(w->adjacent(b->get_position(), dir));
      break;
    case RightAhead:
      dir.direction = (dir.direction + 1) % 6;
      temp = world->getCell(w->adjacent(b->get_position(), dir));
      break;
    case default:
      break;
  }
  switch (this->condition.condition) {
    case Friend:
      Bug *occupant = temp->getOccupant();
      if (occupant != NULL) {
        confirm = occupant->get_color().color == b->get_color().color;
      }
      break;
    case Foe:
      Bug *occupant = temp->getOccupant();
      if (occupant != NULL) {
        confirm = occupant->get_color().color != b->get_color().color;
      }
      break;
    case FriendWithFood:
      Bug *occupant = temp->getOccupant();
      if (occupant != NULL) {
        if (occupant->get_color().color == b->get_color().color){
          confirm = occupant->get_food();
        }
      }
      break;
    case FoeWithFood:
      Bug *occupant = temp->getOccupant();
      if (occupant != NULL) {
        if (occupant->get_color().color != b->get_color().color){
          confirm = occupant->get_food();
        }
      }
      break;
    case Food:
      confirm = (temp->getFood() > 0);
      break;
    case Rock:
      confirm = temp->getObstructed();
      break;
    case Marker_flag:
      confirm = temp->mark->check_marker(tmark(mark_int), b->get_color().color);
      break;
    case FoeMarker:
      confirm = temp->mark->check_other_marker(b->get_color().color);
      break;
    case Home:
      int bug_color = b->get_color().color;
      if (bug_color) {
        confirm = temp->isBlackHomeArea();
      }
      break;
    case FoeHome:
      int bug_color = b->get_color().color;
      if (bug_color) {
        confirm = temp->isRedHomeArea();
      }
      break;
    case default:
      confirm = false;
      break;
  }
  confirm ? b->set_state(x) : b->set_state(y);
}

void I_sense::parse(string args){
  std::vector<std::string> v;
  char* token;

  token = strtok ((char*) args.c_str()," ,.-");
  while (token!= NULL){
      std::string str(token);
      v.push_back(str);
      token= strtok (NULL, " ,.-");
  }
  this->dir.sensedir = std::stoi (v[0], nullptr, 10);
  this->x.state = std::stoi (v[1], nullptr, 10);
  this->y.state = std::stoi (v[2], nullptr, 10);
  this->condition.condition = std::stoi (v[3], nullptr, 10);
  if (condition.condition == Marker_flag) {
    this->mark_int = std::stoi(v[4], nullptr, 10);
  }
}
