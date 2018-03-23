/*
 * File:   Bug.cpp
 */

#include "../header_files/Bug.h"

Bug::Bug(tcolor i_col, int i_progid, int i_resting){
  color = i_col;
  prog_id = i_progid;
  resting = i_resting;
}

void Bug::start_resting(){
  /*TODO: Implement start_resting */
}

bool Bug::rested(){
  bool rested;
  /* TODO: Implement rested */
  return rested;
}

int Bug::get_progid(){
  return prog_id;
}

tcolor Bug::get_color(){
  return color;
}

tsate Bug::get_state(){
  return state;
}

void Bug::set_state(tstate new_state){
  state = new_state;
}

tdirection Bug::get_direction(){
  return direction;
}

void Bug::set_direction(tdirection new_direction){
  direction = new_direction;
}

tposition Bug::get_position(){
  return pos;
}

void Bug::set_position(tposition new_position){
  pos = new_position;
}

bool Bug::get_food(){
  return food;
}

void Bug::set_food(bool new_food){
  food = new_food;
}

bool Bug::is_dead(){
  return dead;
}

void Bug::kill(){
  dead = true;
}
