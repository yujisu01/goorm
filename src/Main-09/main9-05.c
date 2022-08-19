#include<stdio.h>
int main(void){
	int i =100;
	int avg;
	// (1) avg공간에 sum을 호출.
	// (5) 317/3 = 105가 avg에 들어가게됨
	avg = sum(i,107,110)/3;
	printf("%d\n", avg);
	return 0;
}
// (2) a에 100, b에 107, c에 110 들어감.
int sum(int a, int b, int c){
	int tot = 0;
	// (3) tot = 100 + 107 + 110 = 317
	tot = a+b+c;
	// (4) tot값을 return 시킴.
	return tot;
}
// implicit declaration of function 'sum' 어쩌구 
// 함수의 묵시적선언 'sum' 어쩌라는건지