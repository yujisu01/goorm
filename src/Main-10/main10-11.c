#include<stdio.h>
void main(void){
	int a=3, b=5;{
		int a=1, b=6, c=20;
		// a,b가 둘다 있는데 뭘출력해야 하나?
		// 가까운 것부터 출력함. 
		printf("%d, %d, %d\n",a,b,c);
		// 이 a도 현재 식과 가까운 a이다. 여기에 c값 집어넣음.
		// a=20;
		a=c;{
			int c;
			// c=6
			c=b;
			printf("%d, %d, %d\n", a,b,c);
		}
	}
	// 종료됐는데 멀 출력해야 하나?
	// 맨 처음 선언된 a,b가 출력됨 
	// 만약 c값을 출력하려하면 에러뜸
	printf("%d, %d \n",a,b);
}