#include<stdio.h>
void main(void){
	int i=7, j=9;
	int k;
	// 해당 if문을 삼항조건연산자로 나타낸다면?
	// 이 문제는 실행하지말고, 삼항연산자로 나타내는 문제
	if(i>j)
		k=i-j;
	else
		k=i+j;
	// k = (i>j)?(i-j):(i+j);
	// i가 j보다 크면, k=i-j값 출력, 그 반대면 i+j값으로 출력 
}