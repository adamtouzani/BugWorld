#ifndef I_MOVE_H
#define I_MOVE_H

#include "../header_files/Instruction.h"
using namespace std;

class I_move: public Instruction
{
    public:
        I_move();
        int parse(string args, int line);
        string read();
        virtual ~I_move();

    private:
        string on_fail;
};

#endif // I_MOVE_H
