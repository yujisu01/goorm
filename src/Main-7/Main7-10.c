#include<stdio.h>
int main(){
	int i = 4;
	int j = 4;
	// ++i =5, j-- = 3  // 5>3 참
	// i++ =5 (현재저장값은6), --j = 2  // 6<2 거짓
	// else문으로 이동
	if((++i > j--)&& (i++ < --j)) i = i-- + ++j;
	// i-- = 6 (현재저장값은5) , --j = 1
	// 6-1 = 5
	// j = 5
	else j = i-- - --j;
	
	// i = 5, j = 5가됨 
	printf("%d, %d\n",i,j);
}