#include<stdio.h>
int main(){
	int i=1;
	if(i++>1 || i++>=2){
		printf("result=%d",i);
	}
	return 0;
}

// Q41. 반복문을 실행하다가 강제로 실행중인 반복문을
// 		빠져나올때 사용하는 명령어는?
// 		--break

// Q42. 다음 제어문중 성격이 다른것? (1)
//	(1) if
//	(2) for
//	(3) while
//	(4) do~while

// Q43. 반복문 수행중 반복의 시작부분으로 제어를 
// 		이동시키는 명령어는? (3- continue)
//  (1) return
//  (2) for
//  (3) continue
//  (4) break