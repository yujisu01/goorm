#include<stdio.h>
// 전역변수 선언시 기본값은 0이 들어감
int a;
int f(){
	// 0 값을 먼저 리턴시키고 그다음에 ++ 하게됨
	return a++;
}
int main(void){
	for(int i=0; i<3; i++){
		// i값은 2가 될때까지 출력.
		printf("%d,", f());
	}
	// 조건 만족하지 않으니 빠져나오게 되고
	// 현재 a값은 3이 된다.
	printf("a=%d",a);
	return 0;
}