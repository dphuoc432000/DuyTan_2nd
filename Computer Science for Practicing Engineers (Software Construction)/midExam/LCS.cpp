#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
string X, Y;
void LCS(){
	// doc file
	ifstream realFile("LCS.inp");
	if(realFile.fail())
		cout << "Fail.";
	else{
		realFile >> X;
		realFile >> Y;
	}
	realFile.close();
	
	int m = X.length();
	int n = Y.length();
	// tao mang dong 2 chieu
	int **a = new int*[m+ 1];
	int **b = new int*[m+1];
	for(int i = 0; i <= m; i++){
		a[i] = new int[n+1];
		b[i] = new int[n+1];
	}
	// khoi gan bang phuong an = 0
	for(int i = 0; i <=n; i++)
		a[0][i] = 0;
	for(int i = 0; i <=m; i++)
		a[i][0] = 0;
	// tinh bang phuong an va bang truy vet
	for(int i = 1; i<=m;i++)
		for(int j = 1;j <= n; j++)
			if(X[i-1] == Y[j-1]){
				a[i][j] = a[i-1][j-1] + 1;
				b[i][j] = 0;
			}
			else{
				if(a[i-1][j] > a[i][j-1]){
					a[i][j] = a[i-1][j];
					b[i][j] = -1;
				}
				else{
					a[i][j] = a[i][j-1];
					b[i][j] = 1;
				}
			}
	// tim chuoi chung
	int len = a[m][n];
	char* s = new char[len + 1];
	while(m >= 0 && n >= 0){
		if(b[m][n] == 0){
			s[--len] = X[m-1];
			m--;
			n--;
		}
		else if(b[m][n] == -1)
			m--;
		else
			n--;
	}
	
	// ghi file
	ofstream writeFile("LCS.out");
	writeFile << s;
	writeFile.close();
	delete []a;
	delete []b;
}
main(){
	LCS();
}
