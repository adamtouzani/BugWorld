#ifndef _I_DIRECTION_H
#define _I_DIRECTION_H

#include "Bug.h"
#include "Structs.h"
#include "Instruction.h"
#include "World.h"

using namespace std;

class I_direction: public Instruction{
private:
  tdirection d;
  tstate x;
  tstate y;
public:
  I_direction(World*);
  void execute(Bug *);
  void parse(string args);

  void direction(tdirection dir, tstate dir_x, tstate dir_y);
};

#endif
