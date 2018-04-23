#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <vector>
#include <cstring>

#include "../header_files/Bug.h"
#include "../header_files/Structs.h"
#include "../header_files/I_headers.h"

using namespace std;

I_flip::I_flip(World *w) : Instruction(w){}

void I_flip::execute(Bug& b) {
    int randomI =randomint();
    if(randomI == 0)
        b.set_state(x);
    else
        b.set_state(y);
}

void I_flip::parse(std::string args){
  std::vector<std::string> v;
  char* token = strtok((char*)args.c_str(), " ,.-");

  while (token != NULL){
  	std::string str(token);
  	v.push_back(str);
    token = strtok (NULL, " ,.-");
  }

	int p = std::stoi(v[0], nullptr, 10);
	this->x.val = std::stoi(v[1], nullptr, 10);
	this->y.val = std::stoi(v[2], nullptr, 10);
}
