#include<stdio.h>
#define Product 1
#define Stg 2
#define Dev 9
#define Mode Stg
void main(){
	#if Mode==Product
		printf("Real server");
	#elif Mode==Stg
		printf("Stg server")
	#else
		printf("Dev server")
	#endif
}