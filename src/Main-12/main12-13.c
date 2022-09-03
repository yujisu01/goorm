// Q13. 다음 c프로그램에서 main()함수를 실행할때, 
// 		fib() 함수가 호출되는 횟수는?
#include<stdio.h>
int fib(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return (fib(n-1)+fib(n-2));
}
void main(){
	int num=fib(5);
	printf("%d", num);
}
// 호출횟수를 묻는 문제 --함정이 있다
// (1)               	 f(4) + f(3)
//         f(3)+f(2)                   f(2)+f(1)
//    f(2)+f(1)   f(1)+f(0)        f(1)+f(0)
// f(1)+f(0)

// ==> 총 14번 호출 + main에서 한번호출 = 15회 