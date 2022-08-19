#include<stdio.h>
int main(){
	int n;
	printf("숫자를입력하세요");
	scanf("%d", &n);
	printf("%d\n", n=n%2);
	switch(n){
			case 0: printf("나머지는 0\n"); break;
			case 1: printf("나머지는 1\n"); break;
			case 2: printf("나머지는 2\n"); break;
		default: printf("나머지는 다른값");break;
	}
}
