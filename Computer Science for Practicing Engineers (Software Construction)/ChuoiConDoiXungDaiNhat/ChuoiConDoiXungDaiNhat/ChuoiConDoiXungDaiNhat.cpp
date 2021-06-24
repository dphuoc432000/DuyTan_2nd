// ChuoiConDoiXungDaiNhat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <time.h>
using namespace std;
string S;
/*long max(int a, int b) {
    return a > b ? a : b;
}*/
long CDX(int i, int j) {
    if (i > j)
        return 0;
    else if (i == j)
        return 1;
    else if (S[i] == S[j])
        return 2 + CDX(i + 1, j - 1);
    else
        return max(CDX(i + 1, j), CDX(i, j - 1));
}

long CDX_dq(int n) {
    int **a = new int*[n + 1];
    for (int i = 0; i < n + 1; i++)
        a[i] = new int[n + 1];
    for (int i = 1; i <= n; i++)
        a[i][i] = 1;
    for (int i = n; i >= 0; i--)
        for (int j = i + 1; j <= n; j++)
            if (S[i] == S[j])
                a[i][j] = 2 + a[i + 1][j - 1];
            else a[i][j] = max(a[i + 1][j], a[i][j - 1]);
    return a[0][n];

        
}

int main()
{
    int t1, t2;
   // S = "SKHSDKSHDKSHDKHUEWYWWHDINIIWDIWDHD";
    //S = "AXBBA";
    //S = "BNXAXCNB";
    S = "AXNAXA";
    cout << S.length() << endl;
    t1 = clock();
    cout << "Do dai chuoi don doi xung dai nhat: " << CDX(0, S.length()-1) /*CDX_dq(S.length()-1)*/ << endl;
    t2 = clock();
    cout << "Thoi gian chay: " << t2 - t1;
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
