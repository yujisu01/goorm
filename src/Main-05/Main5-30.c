#include<stdio.h>
void main(void){
	int a,b;
	a=20;
	// 참 이므로, 참항의 값이 수행된다. 
	b=(a>10)?a+a:a*a;
	printf("%d\n",b);
}