#include<stdio.h>
int main(){
	printf("%c\n", 'a');
	printf("%d\n", -123);
	printf("%o\n", 123);
	// 16진수는 1111011 에서 7 B 가 된다. (10은A, 11은B)
	printf("%x\n", 123);
	printf("%s\n", 'abcd');
	return 0;
}