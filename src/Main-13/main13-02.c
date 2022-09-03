#include<stdio.h>
#define NAME "유지수"
#define Age 45
void main(){
	int Age = 42;
	printf("NAME is %s\n", NAME);
	printf("Age is %d", Age);
}

// 오류발생
// 앞으로 사용되는 모든 Age는 11인데,
// (int Age 11로 치환된 상태인데,
//   11=42 라는 말도안되는 식을 컴파일 해버려서 오류발생함
// 	 만약 #define Age=a 로 정의했다면 오류안남. )