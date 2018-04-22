/*
 * Marker class implementation
 */


#include "../header_files/Marker.h"

Marker::Marker() {
	this->bits=0;
}

Marker::Marker(const Marker& orig) {
}

Marker::~Marker() {
}

void Marker::set_marker(tmark mark, tcolor col){
    this->bits[mark.mark+6*col.color] = 1;
     
}
 
void Marker::clear_marker(tmark mark, tcolor col){
    this->bits[mark.mark+6*col.color] = 0;
     
}
 
bool Marker::check_marker(tmark mark, tcolor col){
    return this->bits[mark.mark+6*col.color] == 1;
	    
}
   
bool Marker::check_other_marker(tcolor col){
    for (int i = 6*col.color; i < 6*col.color+6; i++){
        if (this->bits[i] == 1){
            return true;
        }
    }
    return false;
	
}
