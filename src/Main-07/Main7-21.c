#include<stdio.h>
int main(){
	int i,sum=0;
	for(i = 1; i<= 10; i+=2){
		sum+=i;
		// sum되는 수들 출력(printf주의..)
		printf("%d,",i);
	}
	printf("%d\n",sum);
	return 0;
}