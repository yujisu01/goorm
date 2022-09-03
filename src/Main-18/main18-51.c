#include<stdio.h>
void main(){
	int value =3, list[4] = {1,3,5,7};
	int i;
	// (1) value=3, &list[0]의 주솟값(200)번지값 넘김=1
	swap(value, &list[0]);
	// (3) list[2] = 5, &list[3]의 주솟값(203)번지값 넘김=7
	swap(list[2], &list[3]);
	// (5) value=3, &list[value]의 주솟값(203)번지값 넘김= 7
	swap(value, &list[value]);
	for(i=0; i<4; i++)
		printf("%d", list[i]);
}
void swap(int a, int *b){
	// (2) temp=3, a=1, 200번지의값=3 
	//		{3,3,5,7}
	// (4) temp=5, a=203번지의값 =7, b(203번지값)에 temp대입
	//  	{3,3,5,5}
	// (6) temp=3, a=203번지의값=7, b(203번지값)에 teml대입
	// 		{3,3,5,3}
	int temp;
	temp=a;
	a=*b;
	*b=temp;
}