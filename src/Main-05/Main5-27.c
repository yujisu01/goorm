#include<stdio.h>
main(void){
	int a1=3, b1=6;
	int c1,d1,e1;
	c1=a1&b1;
	d1=a1|b1;
	e1=a1^b1;
	
	printf("c1=%d, d1=%d, e1=%d", c1,d1,e1);
	return 0;
}

