// ChiaBiVaoHop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
using namespace std;
static long long chia_bi(int m, int n) {
    if (m > 0 && n == 0)
        return 0;
    else if (m == 0)
        return 1;
    else if (m < n)
        return chia_bi(m, m);
    else
        return chia_bi(m, n - 1) + chia_bi(m - n, n);
}
static long long chia_bi_dp(int m, int n) {
    long long** a;
    a = new long long* [m + 1];
    for (int i = 0; i <= m; i++)
        a[i] = new long long[n + 1];
    for (int j = 0; j <= n; j++)
        a[0][j] = 1;
    for (int i = 1; i <= m; i++)
        a[i][0] = 0;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (j > i)
                a[i][j] = a[i][i];
            else
                a[i][j] = a[i][j - 1] + a[i - j][j];
    return a[m][n];
}
int main()
{
    int m = 120, n = 50, t1, t2;
    t1 = clock();
    long long kq = chia_bi_dp(m, n);
    t2 = clock();
    cout << "\n So cach chia " << m << " vien bi vao " << n << " hop la: " << kq;
    cout << "\n Thoi gian tinh toan la = " << t2 - t1;
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
