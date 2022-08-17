#include<stdio.h>
int main(int argc, char *argv[]){
	// a= 0000 1111
	// b= 0010 0000
	int a= 15, b=32;
	int c,d;
	// c= 0000 0011 = 3
	// d= 1000 0000 = 128
	c= a>>2;
	d= b<<2;
	printf("%d, %d", c,d);
	return 0;
}