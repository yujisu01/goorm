#include<stdio.h>
int re(int a,int b){
	if(a<=1)
		return a*b;
	else
		// 연산이 2개..스택에 안쌓고 피라미드 그림
		// 상수값이 나올때까지 좌측부터 연산시작
		return a*re(a-1, b+1)+re(a-1,b);
}
void main(){
	int a=3, b=2;
	printf("%d\n", re(a,b));
}

// (1) a*re(a-1, b+1) + re(a-1,b)
// (2) 3*re(2, 3) + re(2,2)
//     ----------   밑줄친 여기부터 연산 실행
// (3) a=2, b=3 
//     2*re(1,4)  +  re(1,3)
// (4) if문에서 a<=1 이면 a*b 므로 
//     4          +  3  이 됨
//     좌항 상수값은 2*4+3 = 11

// (5) 3*re(2, 3) + re(2,2)
//                  -------  이제 여기 연산실행
// (6) a=2, b=2
// (7) 2*re(1,3) + re(1,2)
// (8)    3      +   2
// (9) 우항 상수값은 3*2+2 = 8

// (10) 최종연산;  3*11+8 = 41