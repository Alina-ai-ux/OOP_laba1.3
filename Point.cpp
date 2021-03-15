//Point.cpp
#include "Point.h"
#include <iostream>
#include <cmath>

double Point::Distance(Point B) {
	return sqrt((B.x - this->x)*(B.x - this->x) + (B.y - this->y)*(B.y - this->y));
}
