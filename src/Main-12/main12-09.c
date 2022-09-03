#include<stdio.h>
int f(int n){
	int tmp;
	if(n<1){
		return 2;
	}
	else{
		// 2
		// 2*f(0)+1 = 5
		// ...
		tmp=2*f(n-1)+1;
		// printf문에 tmp값 출력 5,11,23
		printf("%d,",tmp);
		return tmp;
	}
}
int main(void){
	// 마지막값 출력
	printf("\n%d", f(3));
	return 0;
}