#include<stdio.h>
int fun(int n){
	// (1) n값에 5있음.
	// (3) 2,3
	// (4) 0,1
	printf("%d,",n);
	// (5) n값이 3보다 작으므로 1리턴
	if(n<3)
		return 1;
	// (2) fun(2)+fun(3)
	// (4) fun(0)+fun(1)
	return (fun(n-3)+fun(n-2));
}
int main(){
	int k;
	k=fun(5);
	// (6) 최종값 3출력
	printf("%d\n",k);
}

// f(2) + f(3) = 3
// f(2)=1
// f(3)= f(0)+f(1)= 2