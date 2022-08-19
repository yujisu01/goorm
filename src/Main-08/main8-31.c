#include<stdio.h>
int main(int argc, char*argv[]){
	int i =0;
	// (1)값의 의미 : true 
	while(1){
		if(i==4){
			// break는 while문 종료
			// 따라서, 밑의 ++i를 수행시키지 않고, i=4에서 종료
			break;
		}
		++i;
	}
	printf("i=%d",i);
	return 0;
}