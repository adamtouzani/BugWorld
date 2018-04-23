#ifndef _I_PICKUP_H
#define _I_PICKUP_H

#include "Bug.h"
#include "Structs.h"
#include "Instruction.h"
#include "World.h"


using namespace std;

class I_pickup: public Instruction{
private:
  tstate x;
  tstate y;
public:
  I_pickup(World*);
  void execute(Bug b);
  void parse(std::string args);
  void pickup(tstate x, tstate y);
};

#endif
