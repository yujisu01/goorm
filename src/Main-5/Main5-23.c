#include<stdio.h>
int main(){
	// a=8, b=1, c
	int a=3+5, b=1, c;
	int ap,bp;
	// a는 9값이 됨
	ap=a++;
	// bp= 2
	bp=++b;
	// ap가 8과같냐? 같음(참)
	// 3*1 = 3
	b= 3*(ap==8);
	// ap가 8과 다른가? 같음(거짓)
	// 5*0 = 0
	c= 5*(ap!=8);
	//a=9, b=3, c=0, ap= 8, bp=2
	printf("%d,%d,%d,%d,%d", a,b,c,ap,bp);
}