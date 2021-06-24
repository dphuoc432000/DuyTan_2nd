#include <iostream>
#include "Square.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Cyclinder.h"
#include "ArrayOfShape.h"
using namespace std;
int main()
{
	ArrayOfShape arr;
	arr.input();
	arr.area();
}