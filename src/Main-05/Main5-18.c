#include<stdio.h>
void main(){
	int sum;
	sum= (int)18.2 + (int)19.9;
	printf("%d,", sum);
	// 이걸 더한뒤의 해당값의 정수 구함
	sum=(int)(18.2+19.9);
	printf("%d",sum);
}