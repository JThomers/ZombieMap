#ifndef FLOOR_H
#define FLOOR_H
#include <string.h>
#include <iostream>
class floor
{
public:
    floor(std::string floName);
    ~floor();
    std::string floorName;
    floor::printFloor();
    std::vector<std::vector<room> > myVector;
    std::vector<room> floorRow;
};

#endif // FLOOR_H
