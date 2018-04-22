#include <iostream>
#include <exception>
#include <vector>
#include <cstring>
#include "attribute.h"
#include "I_mark.h"
#include "World.h"

void I_unmark::execute(Bug& b){
    //set mark m and go to state z
    tposition p = b.get_position();
    Cell *x = this->w.get_cell(p);
    x->mark.clear_marker();
    b.set_state(z);
}

void I_unmark::parse(std::string& args){
    std::vector<std::string> v;
    char* token;

    token = strtok ((char*) args.c_str()," ,.-");
    while (token != NULL){
        std::string str(token);
        v.push_back(str);
        token= strtok (NULL, " ,.-");
    }
    int m = std::stoi (v[0], nullptr, 10);
    this->z.val = std::stoi (v[1], nullptr, 10);
}
