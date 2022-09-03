#include<stdio.h>
int main(){
	// 번지수 부여
	int num[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int sum1, sum2;
	// num(=100번지)+1 = 101번지의 값 = 2
	// num(=100번지)+2 = 102번지의 값 = 3
	// 2+3=5
	sum1 = *(*num+1) + *(*num+2);
	// num[1](=103번지) + num[2](=106번지) = 4+7 = 11
	sum2 = *num[1] + *num[2];
	printf("%d, %d", sum1, sum2);
}