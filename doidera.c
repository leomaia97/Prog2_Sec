#include <stdio.h>

int num;

int func(int a, int b);

int main(){
	
	int first=0, sec=50;
	
	num = 10;
	num = num + func(first,sec);
	
	printf("\nNum = %d\nFist = %d\nSec = %d",num,first,sec);
	
	return 0;
}

int func(int a, int b){
	
	a = (a+b)/2;
	num = num-a;
	
	return a;	
}
