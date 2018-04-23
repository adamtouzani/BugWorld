#include <iterator>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <iterator>
#include "../header_files/I_headers.h"
#include "../header_files/Structs.h"
#include "../header_files/Program.h"

using namespace std;

enum instruction_values{ sense = 0, mark, unmark, pickup, drop, turn, move_index, flip, direction };

Program::Program(string filename){
  ifstream inputfile;
  inputfile.open(filename);
  if (!inputfile.is_open()){
      throw Exception("Error opening file!");
  }

  std::vector<std::string> instruction_set; //lines split
  std::vector<std::string> individual_instr; //individual line read
  std::string line; //line buffer
  std::string delim = " "; //delimiter by space

  while(!inputfile.eof()){
    getline(inputfile, line);
    instruction_set.push_back(line);
  }

  //vector to find index# to call a switch case on enum
  std::vector<string> instr_values{"sense", "mark", "unmark", "pickup",
    "drop", "turn", "move", "flip", "direction"};
  std::vector<std::string>::iterator value_itr;

  std::vector<std::string>::iterator vec_itr;
  int index_for_enum;
  //iterate over each line in instruction_set
  for (vec_itr = instruction_set.begin() ; vec_itr != instruction_set.end(); ++vec_itr){
    //tokenize line found in instruction_set and push to individual_instr
    char *converted = new char[(*vec_itr).length()+1];
    std::strcpy(converted, (*vec_itr).c_str());
    individual_instr.push_back(strtok(converted, " "));
    delete [] converted;
    //first word in individual_instr is the name of the I_* to call
    string label = individual_instr[0];
    //find the instruction to call
    for(value_itr = instr_values.begin(); value_itr != instr_values.end(); ++value_itr){
          if(label == *value_itr){
            index_for_enum = (int)std::distance(instr_values.begin(), value_itr);
          }
    }
    switch (index_for_enum) {
      case sense:
            I_sense s;
            s.parse(individual_instr[1]);
        break;
      case mark:
            I_mark m;
            m.parse(individual_instr[1]);
        break;
      case unmark:
            I_unmark um;
            um.parse(individual_instr[1]);
        break;
      case pickup:
            I_pickup p;
            p.parse(individual_instr[1]);
        break;
      case drop:
            I_drop d;
            d.parse(individual_instr[1]);
        break;
      case turn:
            I_turn t;
            t.parse(individual_instr[1]);
        break;
      case move_index:
            I_move mo;
            mo.parse(individual_instr[1]);
        break;
      case flip:
            I_flip f;
            f.parse(individual_instr[1]);
        break;
      case direction:
            I_direction dir;
            dir.parse(individual_instr[1]);
        break;
      default:
        std::cout << "unkown command" << std::endl;
        break;
    }
  }
}

void Program::step(Bug *b){
  if (!b->is_dead()) {
    int state = b->get_state().state;
      //TODO: To be implemented
  }
}
