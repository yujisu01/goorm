#include<stdio.h>
int main(int argc, char*argv[]){
	int num = 29;
	int b;
	// 이런 문제는 그냥 다 해봐야됌
	// 괄호치고 나올수 있음 (7line의 >(조건) , 8line의 &(연산), 9line의 /=(감소) 주의)
	while(num > 0){
		b= num%2;
		num/=2;
		// print문이 while문 안에 있는지 밖에있는지 봐야됨..(나 맨날틀림 ㅠ)
		// b의 값들 출력
		printf("%d",b);
	}
	return 0;
}