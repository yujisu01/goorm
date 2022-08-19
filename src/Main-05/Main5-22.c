#include<stdio.h>
int main(void){
	int x=3, y=4, z=0, rs;
	// y && z는 z가 0이기 때문에 거짓이므로 0이됨
	// x || y는 1
	rs=x || y && z;
	printf("rs=%d", rs);
	return 0;
}