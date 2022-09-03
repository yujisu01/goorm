#include<stdio.h>
int main(void){
	// (1) num(300), a(100), b(200)
	int num[3] = {1,3,6};
	int a=10, b=30;
	func(num,&a,b);
	// (2) printf문으로 출력할것은 func함수에서 바뀐 a, 고정인 b
	printf("a=%d, b=%d\n",a,b);
	return 0;
}
// (3) num(300번지)= *m, &a(100) = *x, b=y
void func(int *m, int *x, int y){
	int i=0, n=0;
	// (4) y= x번지의 값 = 10
	y=*x;
	// (5) n = 301번지의값 + 300번지값+2= 3+1+2 = 6
	n=*(m+1) + (*m+2);
	// (6) x번지의 값에 ++6을 대입하라 = 7
	*x = ++n;
}