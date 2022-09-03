#include<stdio.h>
int factorial(int n){
	if(n==1){
		return 1;
	}
	// factorial(5) 를 받아왔기 때문에 5*f(4)가 됨
	return n*factorial(n-1);
}
void main(){
	int ft= factorial(5);
	// return값 출력
	printf("%d", ft);
}
// (1) 5*f(4)   (9) 5*24 = 120
// (2) 4*f(3)   (8) 4*6 =24
// (3) 3*f(2)   (7) 3*2 = 6
// (4) 2*f(1)   (6) 2*1 = 2
// (5) 1    

// 식이 나오면 (return n*factorial(n-1)) 스택(박스)에 차곡차곡 쌓음
// 아래서 부터 쌓고 위에서 아래로 연산 ㄱㄱ
