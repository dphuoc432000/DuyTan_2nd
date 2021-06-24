#include <iostream>
using namespace std;
int line = 1; //bien toan cuc cua chuong trinh
class test 
{
public:
	int num;
	test(int);//ham tao co doi so
	~test();//ham tuy
};
test::~test() {
	num = n;
	cout << (line++) << ".";
	cout << "--Goi ham huy bo voi num = " << num << "\n";
}
//ham tu dơ
void fct(int p) {
	test x(2 * p);
}
int main() {
	test a(1);
	for (int i = 1; i <= 2; i++)
		fct(i);
	return 0;
}