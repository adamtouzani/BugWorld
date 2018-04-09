#include <iostream>
#include <string>
#include <sstream>

#include "../header_files/Program.h"
#include "../header_file/Instruction.h"

Program::Program(std::string filename) {
  std::ifstream inputFile(filename);
  if(!inputFile.good()){
    throw string("Unable to open file!");
  }
}
Program::~Program(){}

void Program::error(std::string msg) {

}

void  Program::process(){
  std::vector<Instruction> instructionObjects;
  for(std::string line; getline(inputFile, line)){
    //Get first "word" in line
    std::string instruction;
    std::stringstream inputStream(line);
    inputStream >> instruction;
    if(word == string(";")){ //the comment case
      continue;
    } else if (word == string("sense")){
      std::string sensedir, cond, thenelse;
      inputStream >> sensedir >> cond >> thenelse;
    } else if (word == string("mark")){
      std::string i;
      inputStream >> i;
    } else if (word == string("unmark")){
      std::string i;
      inputStream >> i;
    } else if (word == string("pickup")){
      std::string thenelse;
      inputStream >> thenelse;
    } else if (word == string("drop")){

    } else if (word == string("turn")){
      std::string lr;
      inputStream >> lr;
    } else if (word == string("move")){
      std::string thenelse;
      inputStream >> thenelse;
    } else if (word == string("flip")){
      std::string p, thenelse;
      inputStream >> p >> thenelse;
    } else if (word == string("direction")){
      std::string p, thenelse;
      inputStream >> p >> thenelse;
    } else if (word == string("goto")){
      std::string l;
      inputStream >> l;
    } else { //the label case
      
    }
  }
}

void Program::export(){

}
