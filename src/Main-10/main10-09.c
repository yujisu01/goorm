#include<stdio.h>
int main(void){
	int a=10,b=5;
	{
		// 변수가 선언된 영역 제대로 알기 문제 
		int a=20, b;
		b= a+20;
		printf("%d,%d\n",a,b);
	}
	printf("%d, %d\n", a,b);
	return 0;
}