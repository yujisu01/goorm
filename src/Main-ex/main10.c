#include<stdio.h>
int main(){
	char a;
	a='A'+1;
	// B가아닌 출력변환함수가 %c가아닌 %d 이므로 정수로 변환해야함. 
	printf("%d",a);
	return 0;
}