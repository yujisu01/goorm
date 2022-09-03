// 아마도 안나올거같은 문제
#include<stdio.h>
// --i>0?--i:0  --> 그냥 이 인자값대로 정의해줌
// 1>0?0:0      --> --i므로 2에서 1됨, 
// 전위연산자니까 삼항에서 --i 칠때 한번더 연산이 되어서 0 출력
#define MAX(x,y) x>y?x:y
void main(){
	int i=2;
	int result = MAX(--i,0);
	printf("%d",result);
}

// 잘못푼 예시
// i=2 이고, result 값을 구하는거임. 
// MAX(1,0) 이 되네? -> result 값은 MAX(1,0) 줘서 1>0?1:0 이네? 1출력 
// 하면 틀린거임