#include<stdio.h>
int main(){
	int i=1;
	// 연산을 시작하는 좌항부터 참값이 나오게 되므로
	// 굳이굳이 뒤연산을 안해도 된다고 컴파일러가 판단함
	// 그래서 i++만 수행함.
	if(i++ >=1 || i++ >=2){
		printf("result=%d",i);
	}
	return 0;
}