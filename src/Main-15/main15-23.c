#include<stdio.h>
int main(void){
	int arr[]={10,20,30,40,50};
	int *ptr;
	ptr=arr;
	// 100번지+102번지 = 10+30 = 40
	printf("%d,", *ptr + *(ptr+2));
	// 디폴트 102번지 = 30
	ptr=ptr+2;
	// 디폴트 30 + *(ptr+2) = 80
	printf("%d,", *ptr + *(ptr+2));
	// 디폴트 30 + 40 = 70
	printf("%d", ptr[0] + ptr[1]);
	return 0;
}