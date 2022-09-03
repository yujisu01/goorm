#include<stdio.h>
int main(void){
	char arr[]="COMPUTER";
	char *ptr;
	// ptr = arr + 2 = 102번지
	ptr=arr+2;
	// ptr(=102번지)의 값은 M
	printf("%c,", *ptr);
	// *ptr은 M이고, 여기에 +1하면, N
	printf("%c,", *ptr+1);
	// ptr(=102번지)+1 = 103번지 값은 P
	printf("%c,", *(ptr+1));
	return 0;
}