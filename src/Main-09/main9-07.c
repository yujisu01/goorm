#include<stdio.h>
int func(int n);
int main(void){
	int num;
	printf("%d\n", func(5));
	return 0;
}
int func(int n){
	// 받은 파라미터인 5가 2보다 크기때문에 else문으로 이동.
	if(n<2)
		return n;
	else{
		// 변수 총 4개 선언
		//      i  2  3  4  5  6
		//    tmp  1  1  2  3
		// curent  1  2  3  5
		//   last  1  1  2  3
		int i, tmp, curent= 1, last=0;
		// for문의 i가 2부터 시작하므로 
		for(i=2; i<=n; i++){
			tmp=curent;
			curent += last;
			last = tmp;
		}
		// curent값은 main함수의 func(5)로 이동
		return curent;
	}
}