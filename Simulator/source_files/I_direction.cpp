/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <exception>
#include <vector>
#include <cstring>

#include "../header_files/Bug.h"
#include "../header_files/World.h"
#include "../header_files/Structs.h"
#include "../header_files/I_headers.h"

I_direction::I_direction(World *w) : Instruction(w){}

void I_direction::execute(Bug *b) {
    if(b->get_direction().direction == this->d.direction)
        b->set_state(this->x);
    else
        b->set_state(this->y);
}

void I_direction::parse(std::string args){
    std::vector<std::string> v;

    char * token;

    token = strtok ( (char*) args.c_str()," ,.-");
    while (token!= NULL)
    {
        std::string str(token);
        v.push_back(str);
        token= strtok (NULL, " ,.-");
    }

    this->d.direction = std::stoi (v[0],nullptr,10);
    this->x.state = std::stoi(v[1],nullptr,10);
    this->y.state = std::stoi (v[2],nullptr,10);
}
