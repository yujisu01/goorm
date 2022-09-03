#include<stdio.h>
// (2) X+1 * X+1 이 됨. 
//     11 * 11 = 이렇게 진행되는게 아니고
// (3) 10+1*10+1 = 안쪽부터 계산 = (1*10)+(10+1)= 21 이 됨.
#define SQR(X) X*X
void main(){
	int x=10;
	// (1) SQR(x+1)이 그대로 define에 대입됨. 
	//     10+1이 X가 됨.
	printf("%d", SQR(x+1));
}

// 애징간하면 틀릴문제;; 