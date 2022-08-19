#include<stdio.h>
void main(void){
	// 이것도 변수 유효범위를 이해하는 문제
	int i=1, j=2;
	{
		int i=3;
		{
			int i=4;
			// 괄호가 어디까지 유효한지 잘파악해야댐
			printf("%d,",i);
			printf("%d,",j);
		}
		printf("%d,",i);
	}
	printf("%d\n",i);
}