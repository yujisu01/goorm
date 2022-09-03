#include<stdio.h>
// 맨날 ㅈㄴ 헷갈리는 문제
int main(void){
	char *p = "KOREA";
	// %s는 null문자 만날때까지 출력이므로 KOREA 
	printf("%s\n", p);
	// p는 100번지, 103문자부터 출력 EA
	printf("%s\n", p+3);
	// 100번지가 가르키고 있는 공간 '의' 값은 K
	printf("%c\n", *p);
	// 103번지가 가르키고 있는 공간 '의' 값은 E
	printf("%c\n", *(p+3));
	// 100번지(p)의 '의' 값은 K이고, 여기에 2를 합한 값은 M (알파벳 K L M N O P...)
	printf("%c\n", *p+2);
	return 0;
}