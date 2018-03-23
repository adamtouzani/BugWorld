#ifndef I_DIRECTION_H
#define I_DIRECTION_H

#include "../header_files/Instruction.h"
using namespace std;

class I_direction: public Instruction
{
    public:
        I_direction();
        int parse(string args, int line);
        string read();
        virtual ~I_direction();

    private:
        tdirection dir;
        string on_fail;
};

#endif // I_DIRECTION_H
