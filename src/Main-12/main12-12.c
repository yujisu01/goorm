#include<stdio.h>
int sub(int n){
	if(n==0) 
		return 0;
	if(n==1)
		return 1;
	return (sub(n-1)+sub(n-2));
}
void main(){
	int a=0;
	a=sub(4);
	printf("%d",a);
}

// (1) 				s(3) + s(2) 
// (2) s(2)+s(1) =2				s(1)+s(0)  = 1
// 	   s(1)+s(0) =1

// s(2)=1 이고, s(3)=2임 따라서 답은 3