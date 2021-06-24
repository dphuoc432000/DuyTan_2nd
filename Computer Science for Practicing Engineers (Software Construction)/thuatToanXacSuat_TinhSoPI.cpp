#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

double tinh_pi(int n){
	double k = 0; srand(time(NULL));
	for(int i = 1; i <= n ;i ++){
		double x = ((double)rand() / (double)(RAND_MAX)); 
		double y = ((double)rand() / (double)(RAND_MAX));
		if(pow(x,2) + pow(y,2) <= 1)
			k++;
	}
	return 4*k/n;
}
main(){
	int n = 1000;
	cout << tinh_pi(n);
}
