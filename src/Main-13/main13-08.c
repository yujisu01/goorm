#include<stdio.h>
// x+2*y-1
// 3+2*5-1 = 3+10-1 = 12
#define MUL(X,Y) X*Y
void main(){
	int x=3;
	int y=5;
	// main13-07에서 한것처럼, 이것도 x+2, y-1이 그대로 인자값에 들어감
	printf("%d", MUL(x+2, y-1));
}