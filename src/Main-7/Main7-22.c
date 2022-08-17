#include<stdio.h>
int main(){
	int j;
	int sum=0;
	for(j=2; j<=70; j+=5){
		// sum=0부터 1씩 증가함, 
		sum = sum+1;
	}
	// 빠져나올때는 72<=70 일때이므로, 최종 j값은 72가 됨.
		printf("%d",sum);
}
// j 가 2일때 sum 값은 0이다.
// j   : 2 7 12 17 22 27 32 37 42 47 52 57 62 67 72
// sum : 0 1  2  3  4  5  6  7  8  9 10 11 12 13 14