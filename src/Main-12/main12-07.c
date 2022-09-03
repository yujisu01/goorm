#include<stdio.h>
int func(int n){
	// (1) 인자값 19 n=n-1 하면 18이됨
	if(n%2==1)
		n=n-1;
	if(n==0)
		return 0;
	// (2) 여기서 연산수행
	return (func(n-2)+n);
}
void main(){
	int result;
	result =func(19);
	printf("result=%d\n",result);
}

// func(16)+18 = 72+18 =90
// func(14)+16 = 56+16 =72
// func(12)+14 = 42+14=56
// func(10)+12 = 30+12=42
// func(8)+10 = 20+10=30
// func(6)+8 = 12+8=20
// func(4)+6 = 6+6=12
// func(2)+4 = 2+4 =6
// func(0)+2 = 0+2 =2
// 0 