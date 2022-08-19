#include<stdio.h>
int main(){
	int i = 0, sum=0;
	// do while문은 비교 안해도되고 그냥 냅다 연산..ㄱ
	// do문 다 수행하고 나서 비교함.
	do{
		//  i   0  1  2  3  4   5  6
		// sum  0  1  3  6  10  15
		sum=sum+i;
		i++;
	}
	while(i<=5);
	// sum값은 15가 되고, i값은 5가 아닌 6이 됨.(헷갈림주의 ㅠ)
	printf("sum=%d, i=%d",sum,i);
	return 0;
}