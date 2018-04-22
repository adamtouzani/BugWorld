#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <vector>
#include <cstring>

#include "I_flip.h"
#include "Bug.h"

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
