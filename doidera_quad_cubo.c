#include <stdio.h>

int x=2;

void quad(void);
int cubo(int);

int main(){
	quad();
	x=3;
	printf("\nA - %d",x);
	return 0;
}

void quad(void){
	printf("\nB - %d",cubo(x));
}

int cubo(int y){
	y = x * 4;
	printf("\nC - %d",x);
	return y;
}
