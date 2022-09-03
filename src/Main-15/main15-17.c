#include<stdio.h>
void main(){
	int num[] = {100,200,300,400,500};
	int *pt;
	// pt에 num의 주솟값 100 드러감
	pt=num;
	// pt(=100번지)+3 (=103번지는 400) + 100 = 500
	printf("%d\n", *(pt+3) +100);
}