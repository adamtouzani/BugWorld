/*
 * File: World.cpp
 */

#include "World.h"

World::World(){}

void World::load(std::string world_file){
	std::ifstream wf;
	std::string line;
	wf.open(world_file, ios::in);
	if(wf.is_open()){
	    wf >> width >> height;
	} else {
		error("File not found.\n");
		exit(EXIT_FAILURE);
	}

	std::cout << "Width: " << width << std::endl;
	std::cout << "Length: " << height << std::endl;

	worldCells.resize(height);
	std::cout << "Mother vector has been resized" << std::endl;

	for (int i = 0; i < width; ++i) {
		worldCells[i].resize(width);
	}
	std::cout << "Child vectors have been resized" << std::endl;

	getline(wf, line);
	std::cout << line; //print line
	for (int j = 0; j < height; ++j) {
		getline(wf, line);
		//bit of tokenizing
		line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
		for (int d = 0; d < width; ++d) {
			if(line[d] == '+'){
				Bug *n_bug = (line[j][d]->getoccupant());
				n_bug->set_position(d, j);
				n_bug->set_color(1);
				n_bug->set_has_food(false);
				redbugs.push_back(n_bug);
				std::cout << "Red bug base found, Creating red bug" << std::endl;
			}
			if(line[d] == '-'){
        Bug *n_bug = (line[j][d]->getoccupant());
        n_bug->set_position(d, j);
        n_bug->set_color(0);
        n_bug->set_has_food(false);
				blackbugs.push_back(n_bug);
				cout << "Black bug base found, Creating black bug" << std::endl;
			}
		}
	}
	std::cout << "World initialized" << std::endl;
}


void World::executeCycle(){
  //To be implemented
}

Cell World::getCell(tposition pos){
    if(pos.posX > width || pos.posY > height){
        throw Exception("Out of bounds!");
    } else {
        return worldCells[pos.posX][pos.posY];
    }
}

tposition World::adjacent(tposition pos, tdirection dir){
    //Returns adjacent cell, with respect to direction
    //If no such cell exists, returns pos
    switch(dir.direction){
        case 0:
            if(pos.posX < width-1)
                return tposition(pos.posX+1, pos.posY);
            break;
        case 1:
            if(pos.posY%2 == 0 && pos.posY < height-1){
                return tposition(pos.posX, pos.posY+1);
            } else if (pos.posX < width-1 && pos.posY < height -1){
                return tposition(pos.posX+1, pos.posY+1);
            }
            break;
        case 2:
            if(pos.posY%2 == 0 && pos.posX > 0 && pos.posY < height-1){
                return tposition(pos.posX - 1, pos.posY+1);
            } else if (pos.posY < height -1){
                return tposition(pos.posX, pos.posY+1);
            }
            break;
        case 3:
            if(pos.posX > 0)
                return tposition(pos.posX-1, pos.posY);
            break;
        case 4:
            if(pos.posY%2 == 0 && pos.posX > 0 && pos.posY > 0){
                return tposition(pos.posX-1, pos.posY-1);
            } else if (pos.posY > 0){
                return tposition(pos.posX, pos.posY-1);
            }
            break;
        case 5:
            if(pos.posY%2 == 0 && pos.posY > 0){
                return tposition(pos.posX, pos.posY-1);
            } else if (pos.posX > 0 && pos.posY > 0){
                return tposition(pos.posX+1, pos.posY-1);
            }
            break;
        default:
            break;
    }
    return pos;
}

tcolor World::otherColor(tcolor color){
    return tcolor(!color.color);
}

tcolor World::winner(){
    return (redFood()>blackFood()) ? tcolor(0) : tcolor(1);
}

int World::redFood(){
    int count = 0;
    for(int x = 0; x < width; x++){
        for(int y = 0; y < height; y++){
            if(worldCells[x][y].isRedHomeArea())
                count += worldCells[x][y].getFood();
        }
    }
    return count;
}

int World::blackFood(){
    int count = 0;
    for(int x = 0; x < width; x++){
        for(int y = 0; y < height; y++){
            if(worldCells[x][y].isBlackHomeArea())
                count += worldCells[x][y].getFood();
        }
    }
    return count;
}

void World::throwError(std::string errMsg){
    throw Exception(errMsg);
}

void World::log(std::string logMsg){
    std::cout << logMsg << std::endl;
}
