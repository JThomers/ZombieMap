#include "floor.h"
#include "room.h"
#include <string>
#include <iostream>
#include <vector>

floor::floor(std::string floName){
    floorName = floName;
    floorRow.push_back(room("hallway"));
    floorRow.push_back(room("hallway"));
    floorRow.push_back(room("hallway"));
    myVector.push_back((floorRow));
    floorRow.push_back(room("hallway"));
    floorRow.push_back(room("hallway"));
    floorRow.push_back(room("hallway"));
    myVector.push_back((floorRow));
    floorRow.push_back(room("hallway"));
    floorRow.push_back(room("hallway"));
    floorRow.push_back(room("hallway"));
    myVector.push_back((floorRow));

}

floor::~floor()
{
}

floor::printFloor(){
    floorName
}
