#include<stdio.h>
main(void){
	int a=1, b=2;
	int c;
	c= a<b+2 && a<<1 <=b;
	
	printf("%d,%d,%d", a,b,c);
	return 0;
}