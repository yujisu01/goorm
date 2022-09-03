#include<stdio.h>
int main(void){
	struct rgb{
		int red;
		int green;
		int blue;
	};
	// (1) data[0], data[1] 로 나뉨
	//  	d[0] = red, green, blue
	// 		d[1] = red, green, blue
	// (2) d[0] = 10, 20, 30
	// 	   d[1] = 40, __, __    
	//	-- 구조체특징: 그냥 10,20,30,40이 순차적으로 들어가게됨
	// 				  물리적으로 연속적인 배열 공간이기 때문 (주의)
	struct rgb data[2] = {10,20,30,40};
	
	for(int i=0; i<2; i++){
		// (3) data[0]의 red,green,blue == 10,20,30
		// (4) data[1]의 red,green,blue == 40,0,0 
		printf("%d, %d, %d\n", data[i].red, data[i].green, data[i].blue);
	}
	return 0;
}