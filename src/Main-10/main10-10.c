#include<stdio.h>
void main(void){
	int a=1, b=2, c=3;{
		int b=4; c=5;
		a=b;
		{  
			int c;
			c=b;
		}
		// 가까운데부터 값 집어넣음
		// a값에는 b값인 4를 집어넣음
		// b,c는 4line에 있으니  4,5
		printf("a=%d, b=%d, c=%d\n", a,b,c);
	}
}
