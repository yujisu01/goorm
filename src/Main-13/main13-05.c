#include<stdio.h>
#define PI 3.14
// 2*10*3.14
#define AREA(x) 2*x*PI
void main(){
	// %.3f 는 소수점 0.000 세자리 표시하라고 
	printf("%.3f", AREA(10));
}