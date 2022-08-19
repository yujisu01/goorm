#include<stdio.h>
int main(void){
	
	int a=10, b=20;
	printf("%d * %d = %d\n", a,b,mul(a,b));
	return 0;
}
int mul(int a, int b){
	int ret;
	ret = a * b;
	return ret;
}