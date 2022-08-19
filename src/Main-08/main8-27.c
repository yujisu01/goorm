#include<stdio.h>
// 출력결과를 구하라
int main(){
	int i,j;
	// 이중 for문 구조
	// 구구단 
	for(i=2; i<=3; i++){
		printf("%d단 시작\n", i);
		for(j=1; j<=9; j++){
			// 2,3단 구구단 출력
			printf("%d * %d = %d\n", i,j,(i*j));
		}
	}
	return 0;
}