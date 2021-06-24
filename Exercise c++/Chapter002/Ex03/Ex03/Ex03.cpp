#include <iostream>
using namespace std;
#include "Triangle.h"
#include "ArrayOfTriangle.h"
int main()
{
	/*Triangle t1;
	t1.input();
	t1.output();
	cout << endl << t1.area() << endl;
	cout << t1.circumference() << endl;*/


	ArrayOfTriangle arr1;
	arr1.input();
	arr1.output();
	cout << "Max area: " << arr1.maxArea() << endl;
	cout << "Max circumference: " << arr1.maxCircumference() << endl << endl;

	ArrayOfTriangle arr2;
	arr2.operator=(arr1);
	arr2.output();

	arr2.input();
	arr2.output();
	arr1.output();
}
