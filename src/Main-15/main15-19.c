#include<stdio.h>
int main(void){
	int a[] = {1,2,4,8};
	int *p = a;
	// a[]={1,2,4,8} 임. p[1]=3으로 update 하겠다. a[]={1,3,4,8}
	p[1] = 3;
	// a[]={1,4,4,8} 됨
	a[1] = 4;
	// a[]={1,4,5,8}
	p[2] = 5;
	// a[1]+p[1] = 4+4= 8
	// a[2]+p[2] = 8행의 a배열, 10행의 a배열 따로 따로 보지말고,
	// 어차피 같은 배열주솟값을 바라보고 있으므로
	// a[2] + p[2] 는 5+5 = 10이 출력됨
	printf("%d %d \n", a[1]+p[1], a[2]+p[2]);
	return 0;
}