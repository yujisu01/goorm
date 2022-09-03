#include<stdio.h>
int main(void){
	struct point{
		int x;
		int y;
	};
	// (1)
	// x[0] 1 2 
	// x[1] 3 4
	// x[2] 5 6
	// x[3] 7 8
	struct point x[4] ={{1,2},{3,4},{5,6},{7,8}};
	struct point *p;
	// (2)
	// p[0] 100 1 2
	// p[1] 101 3 4
	// p[2] 102 5 6
	// p[3] 103 7 8
	p=x;
	
	// (3)
	// p(100번지)에 x값을 대입 = 1
	printf("%d,", (p++)->x);
	// (4) 
	// p(100번지)에 넣어야되는데 위에서 ++이 됐으니 (후위연산) 
	// 101번지+2의 y값 출력 = 8
	printf("%d", (p+2)->y);
						
	return 0;

}