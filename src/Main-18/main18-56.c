#include<stdio.h>
int main(){
	int i, x=10, *p;
	int a[100];
	// (1) a[i] = i*10 에서 i가 0부터 99까지 나왔다고 다 해주지 말고
	// 		a[i]= 0*10 =0, 1*10=10, 2*10=20 ..30..40 
	// 		{0,10,20,30,40,50...}이런 순서
	for(i=0; i<100; i++)
		a[i] = i*10;
	// (2) p=func(x,a)에 수 넣어주기 (x=10->a, a->x의 값)
	// (7) p=func(10,301번지 리턴)
	p=func(x,a);
	// (8) x=10, a[0]=0, a[1]=20,
	//  	p[0]=20 (20인이유:func(x,a)함수가 301번지를 리턴했으므로)
	// 		p[1]=20 (302번지값)
	// (9) sum=70 정답 // 실행하면 에러남
	printf("sum=%d", x+a[0]+a[1]+p[0]+p[1]);
}
int *func(int a, int *x){
	// (3) a= a+10 이므로, 10+10 = 20
	a=a+10;
	// (4) x= x+1 이므로, x번지수(300)+1 = 301번지값 = 10
	x=x+1;
	// (5) x의 값 = 10 * 2=20을 x의 값에 대입 해줌
	// 		= 301번지값 = 20
	//  	{0,20,20,30,40,50...}
	*x= *x *2;
	// (6) x를 리턴함
	return x;
}