#include<stdio.h>
int f(int n){
	// (2) 계산하고 스택에 저장
	if(n>0)
		return n%10 + f(n/10);
	else
		return 0;
}
void main(){
	int result;
	// (1) 지가 지를 호출함 = 재귀함수
	result = f(123);
	printf("%d\n", result);
}
// 0
// 1+f(0)=1+0=1
// 2+f(1)=2+1=3
// 3+f(12)=3+3=6
//  => 6 출력 (for문 없음)