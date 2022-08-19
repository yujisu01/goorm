#include<stdio.h>
void main(){
	int a,b;
	a=2;
	// --가 앞인지 뒤인지 확인. 
	// while 조건문을 실행함으로써 a--가 실행됨 
	while(a-- > 0){
		// 따라서 print문에는 2가 출력되는것이 아닌, 1이 출력됨
		// a--(1) > 0  성립
		// a--(0) > 0  성립하지 않은상태로 a= -1 로 값이 변경되면서 
		// while문 종료
		printf("a=%d\n",a);
	}
	// while문 종료후, for문 실행
	// a값은 현재 -1 이므로, a=-1
	for(b=0; b<2; b++){
		printf("a=%d\n", a++);
	}
}