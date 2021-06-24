#include <iostream>
#include "Point.h"
#include "ArrayOfPoint.h"
using namespace std;
int main()
{
	Point p1;
	p1.input();
	p1.output();

	Point p2;
	p2.input();
	p2.output();
	cout << p1.distance(p2) << endl;

	ArrayOfPoint arr1;
	arr1.input();
	arr1.output();
	

	ArrayOfPoint arr2;
	arr2.operator=(arr1);
	arr2.output();

	arr2.input();
	arr2.output();
	cout << "Max Distance: " << arr2.maxDistance() << endl;
	arr1.output();
}

