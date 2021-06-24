#include "ArrayOfEmployee.h"
#include <iostream>
#include <string>;
using namespace std;
ArrayOfEmployee::ArrayOfEmployee() {
	int n = 0;
	a = new Employee*[10];
}
ArrayOfEmployee::ArrayOfEmployee(Employee** a, int n) {
	this->n = n;
	a = new Employee*[10];
}
ArrayOfEmployee::ArrayOfEmployee(const ArrayOfEmployee& arr) {
	this->n = arr.n;
	this->a = new Employee*[10];
	for (int i = 0; i < arr.n; i++)
		this->a[i] = arr.a[i];
}
ArrayOfEmployee& ArrayOfEmployee::operator=(const ArrayOfEmployee& arr) {
	this->n = arr.n;
	this->a = new Employee*[10];
	for (int i = 0; i < arr.n; i++)
		this->a[i] = arr.a[i];
	return *this;
}
ArrayOfEmployee::~ArrayOfEmployee() {
	delete[]a;
	a = NULL;
}
void ArrayOfEmployee::input() {
	cout << "Enter n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int choose;
		cout << "Choose (1-regular,2-contract): ";
		cin >> choose;
		if (choose == 1) {
			a[i] = new Regular();
			a[i]->input(); /*cin >> *a[i]  */
		}
		if (choose == 2) {
			a[i] = new Contract();
			a[i]->input(); /*cin >> *a[i]  */
		}	
	}
}
void ArrayOfEmployee::output() {
	for (int i = 0; i < n; i++) {
		cout << *a[i] << endl;
		cout << a[i]->computeSalary() << endl;
	}
}
istream& operator>>(istream& is, ArrayOfEmployee& arr) {
	arr.input();
	return is;
}
ostream& operator<<(ostream& os, ArrayOfEmployee& arr) {
	arr.output();
	return os;
}
void ArrayOfEmployee::outputDistrct() {
	for (int i = 0; i < n; i++) {
		if (a[i]->getAddress().getDistrict() == "Hai Chau")
			cout << *a[i];
	}
}
void ArrayOfEmployee::remove(int k) {
	for (int i = k; i < n; i++) {
		a[i] = a[i + 1];
	}
	n--;
}
void ArrayOfEmployee::removeOctober() {
	for (int i = 0; i < n; i++) {
		if (a[i]->getDob().getMonth() == 10) {
			remove(i);
			i = i - 1;
		}
	}
}
/*void ArrayOfEmployee::sortName() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (_strcmpi(a[i]->getLastName(), a[j]->getLastName()) < 0) {
				Employee* k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
			if (_strcmpi(a[i]->getLastName(), a[j]->getLastName()) >= 0)
				if (_strcmpi(a[i]->getFistName(), a[j]->getFistName()) < 0) {
					Employee* k = a[i];
					a[i] = a[j];
					a[j] = k;
				}
		}
	}
}*/
void ArrayOfEmployee::averageSalaryOfStaff() {
	double sum = 0, count = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i]->computeSalary();
		count++;
	}
	cout << "AVERAGE: " << sum / count;
}
