#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
string X, Y;
int m = X.length();
int n = Y.length();





//int max(int m, int n) {
//	return (m >= n) ? m : n;
//}
//string LCS_DP(int m, int n) {
//	string S ="";
//	int** a;
//	a = new int* [m + 1];
//	//cap phat bo nho
//	for (int i = 0; i <= m; i++)
//		a[i] = new int[n + 1];
//	//khoi gan hang 0, cot 0
//	for (int i = 0; i <= m; i++)
//		for (int j = 0; j <= n; j++)
//			a[i][j] = 0;
//
//
//	for (int i = 1; i <= m; i++)
//		for (int j = 1; j <= n; j++) {
//			if (X[i - 1] == Y[j - 1]){
//				a[i][j] = 1 + a[i - 1][j - 1];
//				S += X[i];
//			}
//				
//			else{
//				a[i][j] = max(a[i][j - 1], a[i - 1][j]);
//			}
//				
//		}
//	return S;
//			
//}
//void xuatChuoiConChung(int m ,int n){
//	if(m*n == 0)
//		cout <<  "";
//	if(X[m] == Y[n]){
//		cout << X[m];
//		m--;
//		n--; 
//	}
//	else{
//		if(a[m-1,n] == a[m,n])
//			m--;
//		else
//			n--;
//	}
//	xuatChuoiConChung(m-1, n-1);
//}
void docFile(){
	ifstream realFile("LCS.inp");
	if(realFile.fail())
		cout << "Fail.";
	else{
		realFile >> X;
		realFile >> Y;
	}
	realFile.close();
}
void LCS(){
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
	int **B = new int*[m+ 1];
	int **T = new int*[m+1];
	for(int i = 0; i <= m; i++){
		B[i] = new int[n+1];
		T[i] = new int[n+1];
	}
	
	for(int i = 0; i <=n; i++)
		B[0][i] = 0;
	for(int i = 0; i <=m; i++)
		B[i][0] = 0;
	for(int i = 1; i<=m;i++)
		for(int j = 1;j <= n; j++)
			if(X[i-1] == Y[j-1]){
				B[i][j] = B[i-1][j-1] + 1;
				T[i][j] = 0;
			}
			else{
				if(B[i-1][j] > B[i][j-1]){
					B[i][j] = B[i-1][j];
					T[i][j] = -1;
				}
				else{
					B[i][j] = B[i][j-1];
					T[i][j] = 1;
				}
			}
	int len = B[m][n];
	char* s = new char[len + 1];
	while(m >= 0 && n >= 0){
		if(T[m][n] == 0){
			s[--len] = X[m-1];
			m--;
			n--;
		}
		else if(T[m][n] == -1)
			m--;
		else
			n--;
	}
	ofstream writeFile("LCS.out");
	writeFile << s;
	writeFile.close();
}
void ghiFile(){
	ofstream writeFile("LCS.out");
	
//	writeFile <<LCS_DP(X.length(), Y.length());
	//writeFile << LCS();
	writeFile.close();
}
main(){
	docFile();
	LCS();
}
