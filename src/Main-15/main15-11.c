#include<stdio.h>
void main(){
	int A=10, B;
	// C에는 B의 주솟값이 들어가게 된다.
	int *C= &B;
	// B에는 10이, A에는 9 들어감
	B=A--;
	// B= 10+20  (9+20 이라고 해버림)
	B+=20;
	printf("%d", *C);
}