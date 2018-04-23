#include <cstdlib>
#include <iostream>
#include "../header_files/I_headers.h"

using namespace std;

I_move::I_move(World *w) : Instruction(w){}

void I_move::execute(Bug *b){
  tposition pos = w->adjacent(b->get_position(), b->get_direction());
  Cell *temp = w->getCell(b->get_position());
  Cell *adj = w->getCell(pos);
  if (adj->getOccupant() == NULL && !adj->getObstructed()) {
    temp->setOccupant(NULL);
    adj->setOccupant(b);
    b->set_state(this->x);
    b->set_position(pos);
  } else {
    b->set_state(this->y);
  }
}

void I_move::parse(string args){
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
}
