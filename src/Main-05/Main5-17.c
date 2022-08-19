#include<stdio.h>
// 파이썬에는 이런문제 안나옴
void main(){
	int a,b;
	// (1) a에는 현재 0값이 있음
	// (3) a에 현재 1이 들어가 있음.
	a=4*(1/2);
	// (2) b는 a이고, a=a+1 이 됨.
	// (4) b는 0임.
	b=a++;
	printf("%d,%d",a,b);
}