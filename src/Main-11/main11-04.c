#include<stdio.h>
void reverseNum(int num){
	// (3) if문으로 이동해서 num값 (=1) 출력 	
	if(num<10){
		printf("%d",num);
	}
	else{
		// (1) printf가 더 선행이므로, 걍 수행 ㄱㄱ
		printf("%d",num%10);
		// (2) 1234 (나머지=4) -> 123 (3) -> 12 (2) -> 1은 10보다 작으므로
		reverseNum(num/10);
	}
}
void main(){
	// 시작
	reverseNum(1234);
}

// 3번문제는 인자 받은걸 스택에 계속 쌓음
// 4번문제는 냅다 출력하고, 쌓을것도 없고 연산할것도 없음