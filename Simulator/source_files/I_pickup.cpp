#include <iostream>
#include <cstdlib>

#include "../header_files/Bug.h"
#include "../header_files/World.h"
#include "../header_files/Structs.h"
#include "../header_files/I_headers.h"

using namespace std;

I_pickup::I_pickup(World *w) : Instruction(w){}

void I_pickup::execute(Bug *b){
  if (!b->get_food()) {
    Cell *temp = world->getCell(b->get_position());
    int food = temp->getFood();
    if (food == 0) {
      b->set_state(this->y);
    } else {
      temp->setFood(food-1);
      b->set_food(true);
      b->set_state(this->x);
    }
  }
  return;
};

void I_pickup::parse(string args){
  std::vector<std::string> v;
  char* token;

  token = strtok ((char*) args.c_str()," ,.-");
  while (token!= NULL){
      std::string str(token);
      v.push_back(str);
      token= strtok (NULL, " ,.-");
  }
  this->x.state = std::stoi (v[0], nullptr, 10);
  this->y.state = std::stoi (v[1], nullptr, 10);
};
