#include<stdio.h>
int main(int argc, char *argv[]){
	int num[2][3]={{-3,14,5},{1,-10,8}};
	// p는 103번지 가리킴
	int *p = num[1];
	// ++103 이므로 104번지 값 = -10
	printf("%d,", *(++p));
	// --104 이므로 103-2 = 101번지 값 = 14
	printf("%d", *(--p-2));
	return 0;
}