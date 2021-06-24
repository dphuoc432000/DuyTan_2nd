#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

	//Kiem tra chuoi ngoac.
	bool kiemTra(string t){
		stack <char>S; // su dung stack co san trong C++
		for(int i = 0; i < t.length(); i++)
			if(t[i] == '(')
				S.push(t[i]);
			else if(t[i] == ')'){
				if(!S.empty())
					S.pop();
				else
					return false;
			}
			else{
				cout << "\nChuoi chua ky tu khong hop le!";
				return false;
			}
		if(S.empty())
			return true;
		else
			return false;
	}
main(){
	string t;
	cout << "Nhap chuoi '()' can kiem tra: ";
	cin >> t;
	if(kiemTra(t))
		cout << "\nChuoi ngoac nhap hop le.";
	else
		cout << "\nChuoi ngoac nhap KHONG hop le.";
	
}
