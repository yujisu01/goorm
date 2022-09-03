#include<stdio.h>
int main(void){
	// 구조체 선언
	struct rgb{
	 int red;
	 int green;
	 int blue;
	};
 	// (1) data[0], data[1] 
	//	 data[0] = 10, 20
	// 	 data[1] = 40, 50
	struct rgb data[2] = {{10,20},{40,50}};
	// data[0]가 가지고 있는 red(10), green(20), blue(없음)
	// data[1]이 가지고 있는 red(40), green(50), blue(없음)
	for(int i=0; i<2; i++){
		printf("%d, %d, %d\n", data[i].red, data[i].green, data[i].blue);
	}
	return 0;
}

// d[0]  red, green, blue     -- 이렇게 순서대로 들어감
//   	  10    20    0 
// d[1]  red, green, blue  
//   	  40    50    0 