// 지금까지 공부한건 포인터배열: 각각 배열요소값에 주솟값이 들어감
// 지금 나온 배열포인터: 값에 맞춰서 뭔가 재구성..2차원 배열매칭할떄 쓰이는데, 실무에서는 많이 안쓰임
// 2019년도 국가직에 처음 출제된 문제 ... 선언한게 얼척없는 문제
#include<stdio.h>
#include<stdlib.h>
#define N 3
int main(void){
	// N은 define에서 정의된것처럼 3이됨. 무슨의미? 3열로 재배치해라.
	// out이라는 포인터변수 선언
	int(*in)[N], *out, sum=0;
	// in이라는 공간
	// N*N*sizeof(int) = N*N*4 = 3*3*4 = "int형으로 3행3열 짜리 만들어라!"
	// 연속된 물리적 공간을 malloc(동적할당) 해줘라.
	// ㅈㄴ쓰잘데기없는 문법 이래요 
	in=(int(*)[N]) malloc(N*N*sizeof(int));
	// (0) in을 out에 넣는다는 뜻 
	out = (int*) in;
	
	// (1) i=0~9까지 돌림 
	// 		out의 0번지=0....out의 1번지 1...out의 2번지는 2....
	for(int i=0; i<N*N; i++) 
		out[i]=i;
	// (2) i=0~3까지 돌림
	// 	 	sum = sum+in[i][i] = sum+in[0][0] = 0  = 0+0 = 0
	// 		sum = sum+in[1][1] = sum+in[1][1] = 4  = 0+4 = 4
	// 		sum = sum+in[2][2] = sum+in[2][2] = 8  = 4+8 = 12
	for(int i=0; i<N; i++)
		sum += in[i][i];
	printf("%d",sum);
	return 0;
}

//(1)
// out(100)  out[0] (100)
//			 out[1] (103)
//			 out[2] (106) 

//(2)
// out(100)  out[0] (100)  0(100)  1(101)  2(102)
//			 out[1] (103)  3(103)  4(104)  5(105)
//			 out[2] (106)  6(106)  7(107)  8(108)