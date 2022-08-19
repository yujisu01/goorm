#include<stdio.h>
int main(){
	// 일단 count=2, sum=0값 셋팅 한채로 누적산 시작
	int count=2;
	int sum=0;
	// count가 10보다 같거나 작을때까지 반복
	// count 2 4 6 8  10 12
	//   sum 0 2 6 12 20 30
	while(count<=10){
		sum += count;
		count +=2;
	}
	// count값 물어볼수도 있음
	// 헷갈림 주의..; (20일지 30일지 헷갈림주의)
	printf("%d\n", sum);
}