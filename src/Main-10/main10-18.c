#include<stdio.h>
void main(){
	int s1, s2;
	// s1에 2라는 값을 리턴시킬거
	// F1, F2, F3, F4도 마찬가지
	// (개행안함 주의)
	s1 = funcA(2);
	printf("F1= %d,", s1);
	s1 = funcA(3);
	printf("F2= %d,", s1);
	s2= funcB(2);
	printf("F3= %d,", s2);
	s2= funcB(3);
	printf("F4= %d", s2);
}
int funcA(int n){
	// funcA는 static 변수가 있으므로, 값이 저장이 됨
	static int s=1;
	s*=n;
	return s;
}
int funcB(int n){
	// funcB는 static변수가 없고, 지역변수이므로 함수 끝나면 소멸이됨
	int s=1;
	s *=n;
	return s;
}