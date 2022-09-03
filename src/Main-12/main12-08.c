#include<stdio.h>
int my(int i, int j){
	// (2) 조건문 부합x 므로 else문 이동
	if(i<3) 
		i=j=1;
	else{
		// (3) i=5, j=14 인자값 가지고 이동
		i= i-1;
		j= j-i;
		// (4) i=4, j=10 이런식으로 출력해줌
		printf("%d, %d,", i,j);
		// (5) 다시 4, 10 인자값 가지고 else문으로 이동
		return my(i,j);
	}
}
void main(){
	// (1)
	my(5,14);
	return 0;
}