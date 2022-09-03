#include<stdio.h>
// 뭔말인지몰겠음 
void main(){
	int a=5;
	int b=3;
	int c=0;
	// (1) b=foo(a,&c) = a값은 5, c주솟값(300번지)의 값임 
	// (3) b= 4리턴
	b=foo(a,&c);
	// (4) c=foo(b, &a) = b=4, a주솟값(100번지)의 값임
	c=foo(b,&a);
	printf("a=%d,b=%d,c=%d",a,b,c);
}
int foo(int a,int *b){
	// (2) b = 5+1 =6, c= 4
	//  	c의 값은 4 이므로 4 리턴
	// (5) b = a의주솟값인 100번지의 값(4) = 4+1 
	// (6)  = a(4)-1 = 3 
	int c;
	*b = a+1;
	c= a-1;
	return c;
}