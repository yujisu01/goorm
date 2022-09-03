#include<stdio.h>
double func(double a, int num){
	// a=2, num=5
	// num이 0이면 1 리턴
	if(num==0){
		return 1;
	}
	return a*func(a, num-1);
}
void main(){
	int sum=func(2,5);
	printf("%d",sum);
}

// (1) 2*func(2,4)			(11)2*16= 32
// (2) 2*func(2,3)			(10)2*8 = 16
// (3) 2*func(2,2)			(9) 2*4 = 8
// (4) 2*func(2,1)			(8) 2*2 = 4
// (5) 2*func(2,0)			(7) 2*1 = 2
// (6) 1 (리턴을 스택에 쌓음)   