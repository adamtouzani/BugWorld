#ifndef _I_SENSE_H
#define _I_SENSE_H

#include "Bug.h"
#include "Structs.h"
#include "Instruction.h"
#include "World.h"


using namespace std;

class I_sense: public Instruction{
private:
  tsensedir dir;
  tstate x;
  tstate y;
  tcondition condition;
  int mark_int;
public:
  I_sense(World*);
  void execute(Bug b);
  void parse(std::string args);
  void sense(tsensedir sensedir, tstate x, tstate y, tcondition c);
};

#endif
