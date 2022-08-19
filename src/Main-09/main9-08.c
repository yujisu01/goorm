#include<stdio.h>
int func(int base,int exp);
int main(){
	int res;
	res=func(2,5);
	printf("%d", res);
	return 0;
}
int func(int base,int exp){
	int res=1;
	for(int i=0; i<exp; i++){
		// 직접 해바야함
		res=res*base;
	}
	return res;
}