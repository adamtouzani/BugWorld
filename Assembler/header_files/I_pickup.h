#ifndef I_PICKUP_H
#define I_PICKUP_H

#include "../header_files/Instruction.h"
using namespace std;

class I_pickup: public Instruction
{
    public:
        I_pickup();
        int parse(string args, int line);
        string read();
        virtual ~I_pickup();

    private:
        string on_fail;
};

#endif // I_PICKUP_H
