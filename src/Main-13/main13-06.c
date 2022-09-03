#include<stdio.h>
#define Add(x,y) x+y
void main(){
	int x=10;
	int y=20;
	printf("%d + %d = %d", x,y,Add(x,y));
}