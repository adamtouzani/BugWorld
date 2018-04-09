

#ifndef INSTRUCTION_H
#define INSTRUCTION_H

using namespace std;

class Instruction
{
    public:
        Instruction();
        virtual int parse(string args, int line) = 0;
        void error(string msg);
        virtual string read() = 0;
        virtual ~Instruction();

    private:
        int line;
        LabelsI_list;
};

#endif // INSTRUCTION_H