#ifndef PROGRAM_H
#define PROGRAM_H

class Program
{
    public:
        Program(std::string filename);
        void error(std::string msg);
        void  process();
        void export();
        virtual ~Program();

    private:
        int line = 0;
        ifstream inputFile;
};

#endif // PROGRAM_H
