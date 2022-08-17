#include<stdio.h>
void main(){
	int a = 10, b=20;
	int sum= 0;
	
	sum=++a + b++;
	printf("%d,",sum);

	sum = a-- + --b;
	printf("%d",sum);
}