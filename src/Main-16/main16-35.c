#include<stdio.h>
void main(){
	int num[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	// ptr은 num[0] = 100번지이다.
	int *ptr = num[0];
	// ptr = ptr+5 = 105번지이다.
	ptr += 5;
	// ptr의 값이 != 9까지 while 돌림
	// 105,106,107 번지의 값을 출력해줌 (108번지 값이 '9'므로)
	while(*ptr != 9){
		printf("%d,", *ptr);
		ptr++;
	}
}

// num[0] (100번지) 1  2  3
// num[1] (103번지) 4  5  6
// num[2] (106번지) 7  8  9