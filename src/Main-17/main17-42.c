#include<stdio.h>
int main(){
	int *arr[3];
	int a=12, b=24, c=36;
	// a주솟값 100번지 들어감 ('12')
	arr[0] = &a;
	// b주솟값 200번지 들어감 ('24')
	arr[1] = &b;
	// c주솟값 300번지 들어감 ('36')
	arr[2] = &c;
	
	// (1) arr의 1번인덱스인 &b(200번지)의 값 +
	// (2) +1은 나중에 하고, **arr부터 구하자면
	// 		arr(=10번지)이 가리키는 번지수(100번지)의 값(='12') + 1
	// 		따라서, 24+12+1 = 37
	printf("%d\n", *arr[1]+**arr+1);
	return 0;
	
}