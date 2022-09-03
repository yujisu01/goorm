#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void){
	// 부모프로세스 생성, i=0, v=1, n=5
	int i=0, v=1, n=5;
	pid_t pid;
	// 자식프로세스 생성, i=0, v=1, n=5
	pid=fork();
	
	// 얘는 실행 X (음수므로)
	if(pid<0){
		for(i=0; i<n; i++)
			v+=(i+1);
		printf("c=%d",v);
	}else if(pid==0){
		for(i=0; i<n; i++)
			// (2) i   0   1   2   3   4
			// v=v*(i+1) = 1..2..6..24..120 
			v*= (i+1);
		printf("b=%d,",v);
	}else{
		// (1) 부모 프로세스 들어왔더니 wait이 있음 
		// 부모에서 wait걸면, 자식한테 제어권 넘김 (선자식, 후부모)
		// 이것만 정확히 알면됨
		// (3) 이제 부모 연산
		wait(NULL);
		for(i=0; i<n; i++)
			v+=1;
		printf("a=%d",v);
	}
}

// Q05. fork함수의 결과값이 양수인 경우 현재 프로세스는?
// (1) 오류
// (2) 부모프로세스
// (3) 자식프로세스
// (4) 루트프로세스 

// 양수-부모이므로 정답은 (2) 
// 루트프로세스라는것은 없음

