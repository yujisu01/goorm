#include<stdio.h>
void main(){
	// arr[4] = {1,2,0,0}
	int arr[4]={1,2};
	for(int i=0; i<4; i++){
		printf("%d", arr[i]);
		// i<3이라고 0,1,2 까지만 출력한사람 나야나
		// 0,1,2 까지 콤마 찍고 다시 for문으로 올라가서 마지막문자열까지 출력
		if(i<3){
			printf(",");
		}
	}
}