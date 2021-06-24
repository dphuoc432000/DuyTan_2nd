#include <iostream>
#include <fstream>
using namespace std;
int n ;
int *a = new int[n];

void docFile(){
	ifstream readFile("MF.inp");
	readFile >> n;
	for(int i = 0; i < n; i++)
		readFile >> a[i];
	readFile.close();
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
//void print(){
//	for(int i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}

void xoa(int a[],int k){
	for(int i = k; i < n-1; i++){
		a[i] = a[i + 1];
	
	}
	n--;
}
int soLanDocFile(int a[]){
	mergeSort(a,0,n - 1);
	while(n >1){
		a[0] = a[0] + a[1];
		xoa(a, 1);
		mergeSort(a, 0, n-1);
	}
	return a[0];
}
void ghiFile(){
	ofstream writeFile("MF.out");
	writeFile << "So lan doc file it nhat la: " << soLanDocFile(a);
	writeFile.close();
}
main(){
	docFile();	
	ghiFile();
}
