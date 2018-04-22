/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <exception>
#include <vector>
#include <cstring>

#include "I_direction.h"
#include "Bug.h"

void I_direction::execute(Bug& b) {
    if(b.get_direction().val == this->d.val)
        b.set_state(this->x);
    else 
        b.set_state(this->y);
}

void I_direction::parse(std::string& args){
    std::vector<std::string> v;

    char * token;

    token = strtok ( (char*) args.c_str()," ,.-");
    while (token!= NULL)
    {
        std::string str(token);
        v.push_back(str);
        token= strtok (NULL, " ,.-");
    }

    this->d.val = std::stoi (v[0],nullptr,10);
    this->x.val = std::stoi(v[1],nullptr,10);
    this->y.val = std::stoi (v[2]],nullptr,10);
}
