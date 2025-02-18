/*Nikitenko Timur st128375@student.spbu.ru
*/
#include "City.h"

City::City() {};
City::~City() {};

int City::getBuildings()
{
    return _number_of_destroyed_buildings;
}

void City::setBuildings(const int &number)
{
    _number_of_destroyed_buildings = number;
}
