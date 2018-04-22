#ifndef _I_SENSE_H
#define _I_SENSE_H

#include "../header_files/Bug.h"
#include "../header_files/Structs.h"
#include "../header_files/Instruction.h"

using namespace std;

class I_sense: public Instruction{
private:
  tsensedir dir;
  tstate x;
  tstate y;
  tcondition condition;
public:
  void execute(Bug b);
  void parse(std::string args);
  void sense(tsensedir sensedir, tstate x, tstate y, tcondition c);
};

#endif
