#include<stdio.h>
// 눈으로 풀지말고 정확히 천천히풀것..
int main(int argc, char *argv[]){
	char str1[20]= "KOREA";
	char str2[20]= "LOVE";
	char *p1= NULL;
	char *p2= NULL;
	// p1에 str1(100번지) 집어넣고
	// p2에 str2(200번지) 집어넣어서
	p1= str1;
	p2= str2;
	// KOREA의 101번지 O 자리에, LOVE의 202번지, V 넣음 (KVREA)
	// LOVE의 203번지 E 자리에, KVREA의 104번지, A 넣음 (LOVA)
	str1[1]= p2[2];
	str2[3]= p1[4];
	// 두 문자열 합쳐서 str1에 들어가게됨
	// 현재 str1 = "KVREALOVA"
	strcat(str1, str2);
	// str1 쭉출력
	printf("%s,", str1);
	// 문자 하나를 출력할건데 (%c), 102번지를 출력하라. 
	// p1(100번지)+2 = 102번지의 값은 R 
	printf("%c", *(p1+2));
	return 0;
}