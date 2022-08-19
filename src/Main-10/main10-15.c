#include<stdio.h>
int func();
int main(void){
	//   i  0  1  2  3  4
	// num  1  2  3  4  5
	for(int i=0; i<5; i++)
		printf("%d", func());
	return 0;
}
int func(){
	// static 정적변수란? 전역변수의 기능도 수행하면서, 지역변수 기능도수행함.
	//					func() 내부에서만 사용
	// 메모리에 계속 남아있는 전역변수 역할과, func() 내부에서 사용하는 지역변수 역할
	static int num;
	// 현재 1
	num++;
	return num;
}