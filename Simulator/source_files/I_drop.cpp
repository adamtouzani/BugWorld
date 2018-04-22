
#include <iostream>
#include <exception>
#include <vector>
#include <cstring>
#include "I_drop.h"
#include "World.h"
#include "Bug.h"

void I_drop::execute(Bug& b){
    tposition p = b.get_position();
    Cell *x = this->w.get_cell(p);
    x->set_food(x->get_food()+1);
    b.set_food(false);
    b.set_state(z);
}

void I_drop::parse(std::string& args){
	std::vector<std::string> v;

    char * token;
    token = strtok((char*) args.c_str()," ,.-");
    while (token!= NULL)
    {
        std::string str(token);
        v.push_back(str);
        token= strtok (NULL, " ,.-");
    }
	
    this->z.val = std::stoi (v[0],nullptr,10);
    
}