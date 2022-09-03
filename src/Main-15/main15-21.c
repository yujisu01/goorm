#include<stdio.h>
int main(void){
	int arr[]={10,20,30,40,50};
	int *ptr;
	ptr=arr;
	// 100번지+101번지 = 10+20 = 30
	printf("%d,", *ptr+*(ptr+1));
	// 100번지+102번지 = 10+30 = 40
	printf("%d,", *ptr+*(ptr+2));
	printf("%d,", *ptr+*(ptr+3));
	// 100번지(=10)+5=15
	printf("%d", *ptr+5);
	return 0;
}