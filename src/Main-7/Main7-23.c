#include<stdio.h>
int main(){
	int count,sum=0;
	for(count=1; count<=10; count++){
		if (count%2 == 0)
			continue;
		else
			sum+=count;
	}
	// continue 일때는 ㄴㄴ이므로 짝수 말고 홀수일때 sum
	printf("%d\n",sum);
}