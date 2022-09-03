// 문제풀때 걍 그림그려블기
#include<stdio.h>
void main(){
	// 5개 공간확보 
	char ch[5];
	// str 문자열을 집어넣는 경우, 배열 마지막에 'null'문자를 집어넣게 되어
	// 6개의 공간을 확보하게 된다. 
	char str[] = "abcde";
	// str이여도, 문자열에만 null을 집어넣음 (숫자는 해당안됨)
	int num[]={1,2,3,4,5};
	// 크기를 구하는 문제 (sizeof) 
	// ch는 5byte출력.
	printf("%d,", sizeof(ch));
	// str은 null문자까지 6byte임 
	printf("%d,", sizeof(str));
	// int형은 4byte차지
	// 각각 요소가 num * 4 = 20 / int형 = 4 
	// 20 / 4= 5byte가 됨
	printf("%d\n", sizeof(num)/sizeof(int));
}