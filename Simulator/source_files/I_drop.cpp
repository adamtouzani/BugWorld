
#include <iostream>
#include <exception>
#include <vector>
#include <cstring>

#include "../header_files/Bug.h"
#include "../header_files/Structs.h"
#include "../header_files/I_headers.h"

using namespace std;

I_drop::I_drop(World *w) : Instruction(w){}

void I_drop::execute(Bug *b){
    tposition p = b->get_position();
    Cell *x = this->world->getCell(p);
    x->setFood(x->getFood()+1);
    b->set_food(false);
    b->set_state(z);
}

void I_drop::parse(std::string args){
	std::vector<std::string> v;

    char * token;
    token = strtok((char*) args.c_str()," ,.-");
    while (token!= NULL)
    {
        std::string str(token);
        v.push_back(str);
        token= strtok (NULL, " ,.-");
    }

    this->z.state = std::stoi (v[0],nullptr,10);

}
