#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "ArrayOfRectangle.h"
int main()
{
	/*Rectangle r1;
	r1.input();
	r1.output();
	cout << r1.area() << endl;
	cout << r1.circumference() << endl;*/

	ArrayOfRectangle arr1;
	arr1.input();
	arr1.output();
	cout << "Max area: " <<arr1.maxArea() << endl;
	cout << "Max circumference: " << arr1.maxCircumference()<<endl << endl;

	ArrayOfRectangle arr2;
	arr2.operator=(arr1);
	arr2.output();

	arr2.input();
	arr2.output();
	arr1.output();
}