// chuoiConChung.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <time.h>
using namespace std;
//int m, n;
/*char* X = new char[m];
char* Y = new char[n];*/
//cua giang vien
string X, Y;
int max(int m, int n) {
	return (m >= n) ? m : n;
}
static int LCS(int m, int n) {
	
	if (m == 0 || n == 0)
		return 0;
	else {
		if (X[m - 1] == Y[n - 1])
			return 1 + LCS(m - 1, n - 1);
		else
			return max(LCS(m - 1, n), LCS(m, n - 1));
	}
}
static int LCS_DP(int m, int n) {
	//cap phat bo nho
	int** a;
	a = new int* [m + 1];
	for (int i = 0; i <= m; i++)
		a[i] = new int[n + 1];
	//khoi gan hang 0, cot 0
	for (int i = 0; i <= m; i++)
		for (int j = 0; j <= n; j++)
			a[i][j] = 0;


	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++) {
			if (X[i - 1] == Y[j - 1])
				a[i][j] = 1 + a[i - 1][j - 1];
			else
				a[i][j] = max(a[i][j - 1], a[i - 1][j]);
		}
	return a[m][n];
			
}
int main()
{
	/*int m = 6, n =5;
	cout << "nhap chuoi X: " << endl;
	for (int i = 0; i < m; i++)
		cin >> X[i];
	cout << "nhap chuoi y: " << endl;
	for (int i = 0; i < m; i++)
		cin >> Y[i];
	cout << endl;
	cout << "do chuoi con chung dai nhat: " << LCS(m, n);*/
	// cua thay
	//X = "SDKFNSCABADCA"; Y = "DBSFOSAXDA";
	/*X = "SDKFNSLDFSDJFLKSDFLSFLSOOIREIW"; 
	Y = "DBSKJFWEJFOSDJFDOIJFMXCSJFSOJDFSJDOFJSOD";*/
	X = "APNKT";
	Y = "KNPKAT";
	int m = X.length(); 
	int n = Y.length();
	long t1, t2, kq;
	t1 = clock();
	//kq = LCS(m, n);
	kq = LCS_DP(m, n);
	t2 = clock();
	cout << "\n Do dai chuoi con chung dai nhat la: " << kq;   
	cout << "\n thoi gian tinh toan la = " << (t2 - t1);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
