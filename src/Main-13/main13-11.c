#include<stdio.h>
#define Product 1
#define Stg 2
#define Dev 9
#define Mode Product
void main(){
	// Mode가 Product이면 출력
	// Mode는 Product므로 출력 Ok
	#if Mode==Product
		printf("Real Server");
	#else
		printf("Dev Server");
	#endif
}