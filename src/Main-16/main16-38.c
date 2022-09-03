#include<stdio.h>
int main(int argc, char *argv[]){
	// 번지 수 부여 
	// num[0]  11(100)  22(101)
	// num[1]  44(102)  55(103)
	int num[2][2] = {{11,22},{44,55}};
	int i, sum=0;
	int *p;
	// p는 100번지
	p=num[0];
	// i가 1부터 3까지 돌리기
	// sum= sum+ (100번지+1=101번지값=22) = 0+22 = 22
	// sum= sum+ (100번지+2=102번지값=44) = 22+44 = 66.....누적산
	for(i=1; i<4; i++)
		sum += *(p+i);
	printf("%d",sum);
	return 0;
}