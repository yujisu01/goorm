#include<stdio.h>
int main(){
	int a=5, b=5;
	// a= ax3 + b값으로 풀어서 바로 하지 않고,
	// 대입연산자(*)는 가장 나중에 수행해준다. 
	// 따라서, 3+5 = 8
	// a = a*8을 수행해준다. a값은 40이 되고,
	// b에는 증가시켰으니 6이 된다.
	a*=3 + b++;
	printf("%d, %d", a,b);
	return 0;
}