// 다음프로그램을 수행했을때 현재 수행중인 프로세스 개수는 몇개인지 쓰시오
// 나올수도 있는문제
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void){
	for(int i=0; i<3; i++){
		fork();
	}return 0;
}

// (1) 메인 함수에서 for문돌림 i는 0부터 2까지 돌림
// (2) 그리고 fork함수 실행 
//  	메인 함수가 fork실행하면 현재 2개 돌아가는중
// (3) for문 돌면서, i=0일때 fork() 실행
// 		main 
//        fork 		현재 2개 돌아감
// (3) for문 돌면서, i=1일때 fork() 실행
//  	main  -----fork()
//  	  fork  -----fork()    이렇게 현재 4개 돌아감.
// (4) for문 돌면서, i=2일때 fork() 실행
//  	main ----fork()----fork()
//			 ----fork()
//  	  fork ----fork()----fork() 
//  		   ----fork()
//   하나 하나 하나 가지마다 마다 다 포크() 실행. 그렇게 8개 돌아감. 
// 2의 0승=2, 2의 2승=4, 2의 3승=8 ... 제곱씩 증가

// 답은 8개