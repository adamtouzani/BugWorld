#ifndef _I_PICKUP_H
#define _I_PICKUP_H

#include "../header_files/Bug.h"
#include "../header_files/Structs.h"
#include "../header_files/Instruction.h"

using namespace std;

class I_pickup: public Instruction{
private:
  tstate x;
  tstate y;
public:
  void execute(Bug b);
  void parse(std::string args);
  void pickup(tstate x, tstate y);
};

#endif
