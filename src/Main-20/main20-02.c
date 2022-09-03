// 다음 C언어프로그램의 출력결과 쓰시오
// (단, 자식프로세스의 생성 성공함)

// 입출력함수
#include<stdio.h>
// fork()쓸려면 unistd.h 써야됨
#include<unistd.h>
// pit_t 라는 자료형 쓸려면 sys/types.h 써야됨
#include<sys/types.h>
int main(void){
	// 양수는 부모, 0은 자식, 음수는 실패 
	// 현재 자식프로세스 성공이므로 음수는 X
	pid_t pid;
	// 부모프로세스에 x 선언하고 여기에 0 값대입
	int x=0;
	// pid라는 공간에 fork()함 (자식프로세스 만들어주는거)
	// 자식프로세스도 똑같이 x라는공간 할당받게됨.
	pid=fork();
	// pid가 0보다 크다? 양수이니까 부모프로세스가 된다.
	// (1) 부모x에 1값 대입 
	// (2) 부모는 종료됐고
	if(pid>0){
		x=1;
		printf("부모:%d\n",x);
	}
	// pid=0이면 자식프로세스 
	// (3) 자식처리 turn 
	// (4) 자식이 갖고있는 x값 출력해라 x=2 
	// 		부모 먼저 한번돌고, 그다음 자식이 한번돈다. 
	else if(pid==0){
		x=2;
		printf("자식:%d\n",x);
	}
	// 둘다 아니면 음수므로 실패 (근데 성공했다고 하니까 이건 X)
	else{
		printf("실패");
	}return 0;
}