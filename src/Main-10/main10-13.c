#include<stdio.h>
int a=1, b=2, c=3;
int f(void);
int main(void){
	// (2) f()의 return 값을 출력
	printf("%3d\n",f());
	// a에 현재 4있음. b,c 전역변수에는 4값이 안들어감 (f()의 지역변수에 들어간거임)
	printf("%3d%3d%3d\n",a,b,c);
	return 0;
}
int f(void){
	int b,c;
	// (1)
	// int b,c는 선언이 됐으니 4로 값이 됐음
	// int a는 선언 안되서 없음
	// a는 전역변수로 선언된 a(a=1)가 4가 됨.
	// 전역변수 a에는 현재 4인 값이 들어가있음
	// 함수종료후 b,c 종료
	a=b=c=4;
	return (a+b+c);
}