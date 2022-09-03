#include<stdio.h>
int main(int argc, char *argv[]){
	int ary[3];
	int s=0;
	// ary[]는 현재 100번지.
	// ary(=100번지)+0 = 100번지에 1 집어넣음 = {1,0,0,0}
	*(ary+0)=1;
	// ary의 첫번째인덱스에 값넣기
	// ary+0(=100번지)에 + 2 = 1+2 = 3 
	// {1,3,0,0}
	ary[1] = *(ary+0)+2;
	// ary의 두번째인덱스에 값넣기
	// ary(100번지) 값은 현재 1임 
	// 1+3 = 4 
	// {1,3,4,0}
	ary[2] = *ary + 3;
	
	// i의 0번째부터 2번째까지 누적산하라
	for(int i=0; i<3; i++){
		s = s+ary[i];
	}
	printf("%d",s);
	return 0;
}