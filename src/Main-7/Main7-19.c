// 다음 if문을 switch~case문으로 변환
#include<stdio.h>
int main(){
	char grade;
	printf("등급을 입력해주세요");
		scanf("%c", &grade);
	if(grade=='A')
		printf("90점 이상입니다.");
	else if(grade=='B')
		printf("80점 이상입니다");
	else if(grade=='C')
		printf("70점 이상입니다");
	else if(grade=='D')
		printf("60점 이상입니다");
	else
		printf("60점 미만입니다");
	return 0;
}

// switch~case문 으로 변경

// scanf("%c", &grade);
// switch(grade){
// 	case 'A': printf("90점 이상입니다.");break;
// 	case 'B': printf("80점 이상입니다.");break;
// 	case 'C': printf("70점 이상입니다.");break;
// 	case 'D': printf("60점 이상입니다.");break;
// 	default: printf("60점 미만입니다.");break;

