#include<stdio.h>
int main(void){
	int n1=1, n2=2, n3=3;
	int r1,r2,r3;
	// 참||거짓이 됨, r1=1
	r1=(n2<=2)||(n3>3);
	// 참을 반전시킴 = r2=0
	r2=!n3;
	// 거짓&&참 = r3= 0
	r3=(n1>1)&&(n2<3);
	
	// 0-0+1 = 1
	printf("%d", r3-r2+r1);
	return 0;
}