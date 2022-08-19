#include<stdio.h>
int main(){
	int i=10, sum=0;
	// do while문과 while문 비교 
	// do문은 무조건 한번은 수행해야 한다.
	// 만약 while문이라면 성립도 안되서 수행이 안될것
	// main8-37_ex문제 참고.
	do{
		sum =sum+i;
		i++;
	}while(i<10);
	printf("%d",sum);
	return 0;
}