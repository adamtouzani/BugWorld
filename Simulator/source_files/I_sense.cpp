
#include <cstdlib>
#include <iostream>

#include "../header_files/Bug.h"
#include "../header_files/World.h"
#include "../header_files/Structs.h"
#include "../header_files/I_headers.h"

using namespace std;

I_sense::I_sense(World *w) : Instruction(w){}

void I_sense::execute(Bug b){

};

void I_sense::parse(string args){

};
