#include<stdio.h>
// 재밌고 흥미로운 문제
int main(){
	int i=1;
	// 앞단은 true, 
	// 앞단 수행하면서(i=1) 뒷단도 성립하게됨 (i=2)
	// 뒷단 성립후 i=3이 됨.
	if(i++>=1 && i++ >=2){
		// 재밌고 즐거운문제 
		printf("result=%d", i);
	}
	return 0;
}