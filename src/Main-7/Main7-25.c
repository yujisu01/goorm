#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=1; i<=10;i+=2){
		// 0이 아닌 값이 있으면 참(true)임.
		// 거짓(false)값만 sum에 대입해줌. (참은 continue)
		// 11은 10보다 크기때문에 for문을 빠져나감
		if(i%2 && i%3 )
			continue;
		sum+= i;
	}
	printf("%d",sum);
	return 0;
}