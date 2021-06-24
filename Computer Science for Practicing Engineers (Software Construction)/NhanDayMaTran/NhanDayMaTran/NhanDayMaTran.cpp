// NhanDayMaTran.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define INT_MAX 200000;
int F[100][100];
int S[100][100];
int num = 1;
int d[] = { 3,5,7,2,9 };
int n = 5;
//int d[] = { 6,7,23,44,23,56,88,4,12,34,8 };
//int n = 10;


int tinh(int n) {
    int i, j, k;
    for (i = 1; i <= n; i++)
        F[i][i] = 0;
    for(int L = 2; L <n;L++)
        for (i = 1; i <= n - L + 1; i++) {
            j = i + L - 1;
            F[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int q = F[i][k] + F[k + 1][j] + d[i - 1] * d[k] * d[j];
                if (q < F[i][j]) {
                    F[i][j] = q;
                    S[i][j] = k;
                }
            }
        }
    return F[1][n - 1];
}
void inkq(int i, int j) {
    if (i == j)
        cout << "A" << num++;
    else {
        cout << "( ";
        inkq(i, S[i][j]);
        cout << " x ";
        inkq(S[i][j] + 1, j);
        cout << ")";
    }

}
int main()
{
    
    cout << "\n - So phep tinh it nhat la: " << tinh(n) << endl;
    cout << "\n Thu tu nhan nhau sau: ";
    inkq(1, n - 1);
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
