#ifndef I_TURN_H
#define I_TURN_H

#include "../header_files/Instruction.h"
using namespace std;

class I_turn: public Instruction
{
    public:
       I_turn();
        int parse(string args, int line);
        string read();
        virtual ~I_turn();

    private:
        tleftright lr;
};

#endif //I_TURN_H
