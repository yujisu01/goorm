#include<stdio.h>
void main(){
	int x[]={1,2,3,4};
	int i,sum;
	for(i=0; i<4; i++){
		sum+= x[i];
	}
	printf("%d",sum);
}

// 1+2+3+4 = 10