// 다음 c프로그램 실행결과는?
//  (단, 아래의 scanf()함수의 입력으로 90을 타이핑했다고 가정함)
#include<stdio.h>
int main(){
	char *pu = "90입력하셈 :";
	int i=10;
	int j=20;
	int *k=&i;
	
	printf("%s", pu);
	// 90을 입력함
	// k의값은 i의 주솟값임(=100번지), 100번지에다가 90이란 값을 쓰라고 했으니
	// 100번지엔 90값이 들어가게됨. 
	scanf("%d",k);
	// 
	printf("%d, %d, %d \n", i,j,*k);
	return 0;
}