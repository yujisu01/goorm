// 다음 c언어 프로그램 출력결과는?
// (단, 자식프로세스 생성 성공함)
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void){
	// i, v, n이라는 공간 생성 (부모)
	int i=0, v=1, n=5;
	pid_t pid;
	// pid에 fork -- 양수,0, 음수 (성공했으니 음수 폐기)
	pid=fork();
	
	// (1) 해당 if문 아예 수행 X (음수므로)
	if(pid<0){
		for(i=0; i<n; i++)
			v+= (i+1);
		printf("c=%d",v);
	// (4) 자식프로세스 수행
	}else if(pid==0){
		for(i=0;i<n;i++)
	//     i   0         1				 2			     3		         4 				  5(for문종료)
	// (5) v=v*(0+1)=1, v=v*(1+1)=1*2=2, v*(2+1)=2*3=6, v*(3+1)=6*4=24, v*(4+1)=24*5=120, 
			v*= (i+1);
	// (6) 자식 v값출력
		printf("b=%d",v);
	// (2) 양수인 부모부터 수행
	//   i는 0부터 4까지 
	//   i  0        1          2          3         4        5 (for문종료)
	//   v= v+1 = 2, v= 2+1= 3, v= 3+1=4, v= 4+1=5, v= 5+1=6, 
	}else{
		for(i=0;i<n;i++)
			v+=1;
		// (3) 부모 v값 출력
		printf("a=%d,",v);
	}
}
