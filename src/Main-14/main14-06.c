#include<stdio.h>
void main(){
	int x[] = {1,2,3,4};
	// (1) fnc_sum(x,16/4)  =>  f_s(4,4)  
	//    숫자 1개 4바이트이고, x[]에는 숫자 4개 있으니까 16바이트가 됨
	//    x값은 현재 x[]에 공간 4바이트 있으므로 4가됨 
	int sum=fnc_sum(x,sizeof(x)/sizeof(int));
	printf("%d",sum);
}
int fnc_sum(int arr[],int size){
	int sum=0;
	
	// (2) arr[]은 (임의의주소 100번지) 번지수가 오게 되어 x에 있는 배열을 참조하게됨.
	//    int size에는 4가옴
	//    0부터 4까지 누적산 해주면 1+2+3+4 = 10됨
	for(int i=0; i<size; i++){
		sum+=arr[i];
	}
	return sum;
}