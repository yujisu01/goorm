#include<stdio.h>
void main(void){
	int a=10, b=20, c=30, d=40;
	// change라는 함수호출
	// a의주솟값(100번지= px)
	// b의주솟값(200번지=py)
	// c=pc, d=pd
	change(&a, &b, c, d);
	printf("a=%d, b=%d, c=%d, d=%d",a,b,c,d);
}
// 포인터변수 선언한것만 main함수에서 변경 주의
void change(int *px, int *py, int pc, int pd){
	// 200번지값+40 = 20+40 = 60이라는 수를 100번지에 대입해라
	//	a=60
	*px= *py+pd;
	// pc+pd = 70이라는 값을 200번지에 대입해라 
	//  b=70
	*py= pc+pd;
	// 100번지값+40 = 60+40=100이라는 값을 pc에대입해라
	//  pc= 100
	pc= *px+pd;
	// 100번지값+200번지값 = 60+70 = 130이라는값을 pd에 대입해라
	pd= *px+*py;
}

// change함수에서 선언한 int pc, int pd는 해당 함수에서는 변하는거 맞음
// main 함수에서 얘네들을 데려올수 없음. 출제위원이 헷갈리라고 걍낸거
// (20라인, 22라인)