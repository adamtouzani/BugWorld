#include <iostream>
#include <exception>
#include <vector>
#include <cstring>

#include "../header_files/Bug.h"
#include "../header_files/World.h"
#include "../header_files/Structs.h"
#include "../header_files/I_headers.h"

using namespace std;

I_unmark::I_unmark(World *w) : Instruction(w){}

void I_unmark::execute(Bug *b){
    //set mark m and go to state z
    tposition p = b->get_position();
    Cell *x = this->world->getCell(p);
    x->mark->clear_marker(tmark(m), b->get_color());
    b->set_state(z);
}

void I_unmark::parse(std::string args){
    std::vector<std::string> v;
    char* token;

    token = strtok ((char*) args.c_str()," ,.-");
    while (token != NULL){
        std::string str(token);
        v.push_back(str);
        token= strtok (NULL, " ,.-");
    }
    this->m = std::stoi (v[0], nullptr, 10);
    this->z.state = std::stoi (v[1], nullptr, 10);
}
