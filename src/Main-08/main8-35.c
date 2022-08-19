#include<stdio.h>
int main(){
	int a=120, b=45;
	while(a!=b){
		// a가 b값보다 크므로 a-b=75가 됨(a)
		// a값이 크는동안 계속 반복
		// a  120  75  30  (이제 b값이 더크므로 else문으로 이동)
		// b  45   45  45
		if(a>b) a=a-b;
		// a 30  30  15
		// b 45  15      (a=b가 같아지므로, if else문 탈출)
		else b=b-a;
	}
	// 따라서 답이 같아지는 15가 출력되는데
	// ㅈㄴ헷갈리는 문제임
	printf("%d\n",a);
	return 0;
}