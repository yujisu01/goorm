#include<stdio.h>
int main(void){
	int n=4;
	// 아무것도 가르키지 않고 있다라는 의미
	int *pt = NULL;
	// 그리고 pt에 n이라는 주솟값을 넣음 (100번지(임의로 넣은주소 번지임))
	pt= &n;
	
	// n의 주솟값 + 100번지 - &pt의 주솟값은 200번지의 값(100번지) + n값(=4) 
	// 104 - 100 + 4 = 8 
	// printf문 할때 그냥 "%d" 로하면 포맷오류나서, long int값인 "%ld"로 변경했음
	printf("%ld", &n+*pt-*&pt+n);
	return 0;
}
// &는 주솟값 가르키는거 
//  &n (=100번지) + *pt (pt가 가르키고 있는공간=100번지) 
// - *&pt(pt가 가르키고 있는번지의 값) + n (n=4)