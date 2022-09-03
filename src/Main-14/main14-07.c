#include<stdio.h>
void main(){
	char msg[50] = "Hello World! God Luck!";
	// i=2인 'l'부터 시작해서, '!'까지 ++된 number의 값을 찾는 문제
	int i= 2, number=0;
	while(msg[i] != '!'){
		if (msg[i]=='a' || msg[i] == 'e' || msg[i] == 'i' ||
			msg[i]=='o' || msg[i] == 'u' )
			number++;
		i++;
	}
	printf("%d",number);
	return 0;
}

// (1) l l o W o r l d!
// (2) aeiou에 해당되는 문자 if문 조건부합시 number++ 해주고, 밑의 i++도 해줌
// (3) llWrld 는 i++만 해줌 