#include<stdio.h>
void main() {
	// 2행 3열짜리 2차원 배열은 행대표주소가 존재함. (100,200번지 이렇게하면...절레절레)
	// -3(100)  14(101)  5(102)
	//  1(103) -10(104)  8(105)
	int a[2][3]={{-3,14,5},{1,-10,8}};
	// b에는 100번지 103번지
	int *b[] = {a[0], a[1]};
	// p에는 103번지 가리킴
	int *p= b[1];
	
	// b[1]=a[1] = 103번지 의 값 출력
	printf("%d,", *b[1]);
	// p를 1증가시키면, 103번지+1 = 104번지 의 값 출력 
	printf("%d,", *(++p));
	// p를 1감소시키면, 104-103-2 = 101번지의 값 출력 
	printf("%d", *(--p-2));

}