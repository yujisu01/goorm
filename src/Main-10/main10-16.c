#include<stdio.h>
void funCount();
int main(void){
	int num;
	for(num=0; num<3; num++)
		// for문으로 출력
		funCount();
	return 0;
}
void funCount(){
	int num=0;
	// static이므로 기본적으로 0 들어가있음.
	static int count;
	// 함수종료이후, 모든 지역변수는 (정적변수 제외) 없어진채로 main함수 이동
	// main 함수에서 num과 funCount() num과는 아예 다른것이고,
	// count는 static 변수
	// for문으로 출력
	printf("num=%d, count=%d\n", ++num,count++);
}