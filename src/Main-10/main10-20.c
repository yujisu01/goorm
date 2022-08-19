#include<stdio.h>
// static을 전역변수 선언하면 그냥 전역변수인거임
static int snum=0;
	   int inum=0;
void func(){
	// (2) snum, inum ++ = 1 됨
	// (5) snum, inum ++ = 3됨
	snum++;
	inum++;
	// (3) snum=1, inum=1 됐음
	// (6) snum=3, inum=3 
	printf("snum=%d, inum=%d\n",snum, inum);
}
void main(){
	// (1) func()호출
	func();
	// (4) snum, inum ++ = 2되고 func() 호출까지
	snum++;
	inum++;
	func();
	// 종료
}

// Q21. C언어에서 문자열->정수형 변환하는 라이브러리 함수는?
//	(1) atoi()
// 	(2) atof()
// 	(3) itoa()
// 	(4) ceil() 

// --> (1)

// Q22. 입출력함수들과 관련된 함수들이 선언되있는 헤더 파일은?
//  (1) stdio.h
//  (2) process.h
//  (3) stdlib.h
//  (4) string.h

// --> (1) standard input, output header

// Q23. C언어에서 문자열처리 함수의 서식과 그 기능의 연결로 틀린것?
//  (1) strlen(s) -s의 길이를 구한다.
//  (2) strcpy(s1,s2) -s2를 s1으로 복사한다.
//  (3) strcmp(s1,s2) -s1과 s2를 연결한다.
//  (4) strrev(s) -s를 거꾸로 변환한다.

// --> (3) length길이이고, copy복사이고, reverse거꾸로인데
// 		   compare 비교임. 연결x 
// 		   연결은 cat임 야옹