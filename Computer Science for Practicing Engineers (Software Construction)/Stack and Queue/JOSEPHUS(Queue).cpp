#include<iostream>
#include <time.h>
#include <queue>
using namespace std;

void josephus1(int n, int k){
	int *a = new int[n + 1];
	for(int i = 0; i <= n ; i++)
		a[i]= i;
	int dem = n, vt = 0, i = 1;
	while(dem > 1){
		if(a[i] > 0)
			vt++;
		if(a[i] > 0 && vt %k==0){
			vt = 0;
			a[i] = 0;
			dem--;
		}
		i = i+1;
		if(i>n)
			i = 1;
	}
	for(int i = 1; i <= n ; i++)
		if(a[i] > 0){
			cout << "vua la: " << i;
			break;
		}
			
}
void josephus2(int n, int k){
	queue <int> q;
	for(int i = 1; i <= n;i++)
		q.push(i);
	int dem = n, vt  = 0, x;
	while(dem > 1){
		int x  = q.front();
		q.pop();
		++vt;
		if(vt==k){
			dem--;
			vt=0;
		}
		else
			q.push(x);
	}
	cout << "\nVua la(phan tu con sot lai): " << q.front();
}
main(){
	int t1 , t2, t3, t4;
	t1 = clock();
	josephus1(17,4);
	t2 = clock();
	cout << "\nThoi gian chay josephus1 la: " << t2 - t1 << endl;
//	t3 = clock();
//	josephus2(10000000,5);
//	t4 = clock();
//	cout << "\nThoi gian chay josephus2 la: " << t4 - t3;

	josephus2(1000,2);
//	
}
