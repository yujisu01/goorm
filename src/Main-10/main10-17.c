#include<stdio.h>
void main(){
	int i=0, sum=0;
	while(i<3){
	//   i (1) 0  (3) 			   1	 (5)         2	(7)		 3
	// sum (1) 0  (2) (sum+var1+var2=) 2 (4) (2+1+2=) 5 (6) (5+1+3=) 9 
	// i는 2까지만 돌고, sum값이 9까지 돌고, i++ 되면서 3되고 끝
		sum=sum+foo();
		i++;
	}
	printf("sum= %d \n",sum);
}
int foo(void){
		   int var1 =1;
	static int var2 =1;
	return(var1++) + (var2++);
}