#include<stdio.h>
int main(void){
	int x=10, y=20;
	// f라는 함수를 호출해서 거기서 리턴받은 값을 출력하겠다. 
	// x의 주솟값(100번지)과, y값(20)을 호출하겠다.
	printf("%d", f(&x,y));
	// y값이 21이 아닌이유: f()함수에서 21로 바뀐거고
	// main이 가지고있는 y값은 바뀌지 않았으므로 y값은 20이된다. (주의..)
	printf("%d %d\n",x,y);
}
// i라는 포인터변수는 100번지, j에는 20이라는 값이 있음
int f(int *i, int j){
	// i의 값에다가 +5를 해라 (100번지의 값=10 + 5)
	// i = 15
	*i +=5;
	// 연산자 우선순위로 인해 *부터 시행
	// 2 * 15 + 21 
	return(2 * *i + ++j);
}