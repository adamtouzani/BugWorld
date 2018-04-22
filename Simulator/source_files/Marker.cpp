/*
 * Marker class implementation
 */


#include "Marker.h"

Marker::Marker() {
	this->bits=0;
}

Marker::Marker(const Marker& orig) {
}

Marker::~Marker() {
}

void Marker::set_bits(int bit){
    bits= bit;
}
    
int Marker::get_bits(){
    return bits;
}

void Marker::set_marker(tmark mark, tcolor col){
    this->bits = this->bits | 1<<(mark.get_mark()+6*col.get_color());
     
}
 
void Marker::clear_marker(tmark mark, tcolor col){
	this->bits = this->bits & ~1<<(mark.get_mark()+6*col.get_color());
     
}
 
bool Marker::check_marker(tmark mark, tcolor col){
    return this->bits & 1<<(mark.get_mark()+6*col.get_color());
	    
}
   
bool Marker::check_other_marker(tcolor col){
	for (int i = 0; i < 6; i++){
            if (this->bits & 1<<(i + 6*col.get_color())){
                return true;
            }
        }
    return false;
	
}
