#include<stdio.h>
int a=10;
int b=20;
int c=30;
void main(){
	// b만 지역변수이므로, b지워졌음
	func();
	// 다시 재호출
	// a=101, b=200, c=a (a++했으므로 102)
	func();
	// a는 func()함수에서만 쓸수 있으므로, 10
	// b는 20
	// c는 계속 변경했으니 102 ..
	printf("a=%d, b=%d, c=%d\n", a,b,c);
}
void func(void){
	static int a=100;
	 	   int b=200;
	// (1) 나랑 가까이 있는 a,b찾아
	// a=100, b=200
	// a=101
	a++;
	// b=201
	b++;
	// c에 a값 집어넣어야 되는데, c가 없으니 a값 집어넣기
	// a에 현재 101있으므로, c=101
	c=a;
}