#include <iostream>
#include <exception>
#include <vector>
#include <cstring>

#include "../header_files/Bug.h"
#include "../header_files/World.h"
#include "../header_files/Structs.h"
#include "../header_files/I_headers.h"

using namespace std;

I_mark::I_mark(World *w) : Instruction(w){}

void I_mark::execute(Bug& b){
    //set mark m and go to state z
    tposition p = b.get_position();
    Cell *x = this->w.get_cell(p);

    tmark new_mark;
    new_mark.val = m;

    x->mark.set_marker(new_mark, b.get_color());
    b.set_state(z);
}

void I_mark::parse(std::string& args){
    std::vector<std::string> v;
    char* token;

    token = strtok ((char*) args.c_str()," ,.-");
    while (token!= NULL){
        std::string str(token);
        v.push_back(str);
        token= strtok (NULL, " ,.-");
    }
    int m = std::stoi (v[0], nullptr, 10);
    this->z.val = std::stoi (v[1], nullptr, 10);
}
