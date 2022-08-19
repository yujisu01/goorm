#include<stdio.h>
int main(){
	int i,sum=0;
	// i<=5까지 만족을 했어도, 6까지는 성립이 될수있도록 이 for문까지 와야함.	
	for(i=0; i<=5; i++){
		sum+= i;
	}
	// 1+2+3+4+5 = 15임
	// 증강해줘서 i=6을 만들되, 이 식에서는 벗어나야함.
	// 1부터 6까지의 합 = 15가 나옴.
	printf("1부터 %d까지의 합=%d\n", i,sum);
	printf("1부터 %d까지의 합=%d\n", i-1,sum);
	return 0;
}