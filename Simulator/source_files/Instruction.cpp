#include <cstdlib>
#include <iostream>

#include "../header_files/Bug.h"
#include "../header_files/World.h"
#include "../header_files/Structs.h"
#include "../header_files/I_headers.h"

using namespace std;

Instruction::Instruction(World *w){
  world = w;
}
