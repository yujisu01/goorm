#include<stdio.h>
int main(vodi){
	char *ptr;
	char str[] = "computer";
	ptr=str;
	// %s는 주소값을 받고, null문자 만날때까지 출력
	// ptr에는 현재 100번지+3 = 103 번지는? 
	// c가 100번지, o 101 m 102 p 103 이므로 p부터 null문자까지 출력 = puter
	printf("%s,", ptr+3);
	// %c는 문자 하나찍는거임
	// 괄호부터 읽으면 (ptr+3) 앞에 '*' 읽는법 => 103번지'의' 값을 구하는것 = p 
	printf("%c", *(ptr+3));
	return 0;
}
// s는 복수니까 문자'열'출력, c는 한단어 출력 해당단어