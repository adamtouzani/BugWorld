#ifndef I_DROP_H
#define I_DROP_H

#include "../header_files/Instruction.h"
using namespace std;

class I_drop: public Instruction
{
    public:
        I_drop();
        int parse(string args, int line);
        string read();
        virtual ~I_drop();
};

#endif // I_DROP_H
