#include<stdio.h>
int func(int num){
	if(num==1)
		return 1;
	// (3) if문에 부합하지 않으므로 else문 수행
	// (4) 박스로 스택 쌓아줌(연산이므로)
	// (5) 5*func(4)= 5*24 =120
	// (6) 4*func(3)= 4*6= 24 , 3*func(2)= 3*2= 6, 2*func(1) =2 , 1 이런식으로 연산
	else
		return num*func(num-1);
}
void main(){
	int i;
	for(i=5; i>=0; i--)
	{
		// (1) if문에서 i는 5~0까지 수행
		//  	i%2 ==1이므로, 홀수(5,3,1)들만 출력
		// (2) func(5):num
		// (7) func(5):120
		// 	   func(3):6     --> 3일때 다시 위에 if문 가서 연산해줌
		//     func(1):1
		if(i%2 == 1)
			printf("func(%d):%d\n",i,func(i));
	}
}