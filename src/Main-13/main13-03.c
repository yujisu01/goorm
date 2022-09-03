#include<stdio.h>
// 매크로 함수문제
// 아무거나 인자열 받아서 ## 해라 (다붙여서 리턴해라)
#define CAT(x,y,z) x##y##z
void main(){
	// x=11,y=22,z=33 
	printf("%d", CAT(11,22,33));
}