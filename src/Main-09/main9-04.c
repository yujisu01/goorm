#include<stdio.h>
// call by value 이해를 위한 문제
// * 함수에서 값을 복사해서 전달하는 방식.(call by value)
void swap(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(void){
	int a,b;
	a=10;
	b=20;
	// 훼이크문제.
	// 저 void swap함수의 선언된 변수 a,b와
	// 현재 이 함수 변수 a,b는 완전 다른 변수임 
	// 별개의 공간~
	printf("함수호출전:%d,%d\n", a,b);
	swap(a,b);
	printf("함수호출후:%d,%d\n",a,b);
	return 0;
}