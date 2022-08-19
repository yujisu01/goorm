#include<stdio.h>
int main(){
	int i;
	for(i=2; i<=10; i++){
		// i==3 이면, 3 break..
		// 그리고 반복문은 끝난다.
		if(i==3){
			break;
		}
		// 따라서 최종적으로는 i=2값이 출력됨. 
		printf("%d",i);
	}
	return 0;
}