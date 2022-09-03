#include<stdio.h>
int main(){
	int i;
	int a[]={10,20,30,40,50,60,70,80,90,100};
	// a+3의 값 = 40
	int *ptr=a+3;
	for(i=0; i<5; ++i){
		// i 0~4까지 ptr+i 의 값은 i가 0일때 103의 값 = 40 - 3 = 37
		//			ptr+i 의 값는 i가 1일때 104의 값 = 50 - 3 = 47 ...
		printf("%d ", *(ptr+i)-3);
	}
	return 0;
}