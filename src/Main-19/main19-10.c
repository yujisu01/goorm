// 공용체의 정의가 다음과 같이 되어있을때, 공용체가 갖는 기억공간의 크기는?
#include<stdio.h>
union data{
	int a;
	float b;
	double c;
}
// = 8byte

// 이거 주석풀고 실행시켜보면 사이즈 확인 가능
// int형은 4바이트, float형 4바이트, double형은 8바이트이다.
// 공용체는 가장 큰 기억공간 차지하는거 하나로 사용하기 때문에 
// 해당 공용체가 가지는 기억공간 크기는 8바이트가 된다.
// (전체 합산한다면 int(4)+float(4)+doulbe(8)=16byte가 된다.)

//int main(){
//	int a;
//	float b;
//	double c;
	
//	int size;
//	size = sizeof c; 
//	printf("크기:%d",size);
//}