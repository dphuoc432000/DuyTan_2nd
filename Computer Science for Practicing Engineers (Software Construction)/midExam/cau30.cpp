#include <iostream>
#include <cstring>
using namespace std;

void swap(char **x, char **y){
	char *temp = *x;
	*x = *y;
	*y = temp;
}

char* cong(char *x , char *y){
	if(strlen(x) < strlen(y))
		swap(&x,&y);
	int doDaiX = strlen(x), doDaiY = strlen(y);
	char *kq = new  char[doDaiX + 2];
	bool remember = false;
	for(int i = 0; i < doDaiY; i++){
		int temp = *(y + doDaiY - i - 1) - '0' + *(x + doDaiX - i - 1) - '0';
		if (remember)
			temp++;
		if (temp > 9)
			remember = true;
		else
			remember = false;
		temp = temp % 10;
		*(kq + doDaiX - i) = temp + '0';
	}
	for (int i = 0; i < doDaiX - doDaiY; i++)
	{
		int temp = *(x + doDaiX - doDaiY - i - 1) - '0';
		if (remember)
			temp++;
		if (temp > 9)
			remember = true;
		else
			remember = false;
		temp = temp % 10;
		*(kq + doDaiX - doDaiY - i) = temp + '0';
	}
	*(kq + doDaiX + 1) = '\0';
	if (remember)
		*(kq) = '1';
	else
		for (int i = 0; i <= doDaiX; i++)
			*(kq + i) = *(kq + i + 1);
	return kq;
}


main(){
	char* x = "293408324014294872", *y = "2034820384023";
	char* z = cong(x, y);
	cout << z;
}
