#include<stdio.h>
int main(){
	int a,b,c[1];
	// a(100), b(200), c(300)
	a=20; 
	b=20;
	c[0]=20;
	// (1) func(100번지,b,c)
	func(&a,b,c);
	// (3) a=20, b=20(21됐어도 func함수에서 소멸), c=19
	printf("a=%d,b=%d,c=%d",a,b,c[0]);
	return 0;
}
void func(int *a, int b, int *c){
	int x;
	// (2) 
	// x에 a번지의 값을 대입 
	// x= 100번지값= 20
	x= *a;
	// a번지값에 x++ 대입
	// a번지 = 100번지 = 20
	*a= x++;
	// x에 b값 대입
	// x = 20
	x= b;
	// b에 ++x값 대입
	// b = 21 
	b= ++x;
	// c가 가리키는 공간은 main 함수의 번지수..
	// c번지값 (300번지)에 -- 해주기
	// c = 19
	--(*c);
	// func함수 끝나면 모든 지역변수 소멸
}