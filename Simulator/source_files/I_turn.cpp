#include <cstdlib>
#include <iostream>

#include "../header_files/Bug.h"
#include "../header_files/World.h"
#include "../header_files/Structs.h"
#include "../header_files/I_headers.h"


using namespace std;

void I_turn::execute(Bug b){
  tdirection dir = b.get_direction();
  if (lr.leftright == 0) { // 0 = left
    dir.direction = (dir.direction + 5) % 6;
  } else { //1 = right
    dir.direction = (dir.direction + 1) % 6;
  }
  b.set_direction(dir);
  b.set_state(this->z);
};

void I_turn::parse(string args){
  std::vector<std::string> v;
  char* token;

  token = strtok ((char*) args.c_str()," ,.-");
  while (token!= NULL){
      std::string str(token);
      v.push_back(str);
      token= strtok (NULL, " ,.-");
  }
  this->lr.leftright = std::stoi (v[0], nullptr, 10);
  this->z.state = std::stoi (v[1], nullptr, 10);
};
