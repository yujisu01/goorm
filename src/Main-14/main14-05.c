#include<stdio.h>
void main(){
	char arr[4] = {'A','B'};
	for (int i=0; i<4; i++){
		// A,B, ,   ==> A,B 뒤의 널값 까지 출력
		printf("%c", arr[i]);
		if(i<3){
			printf(",");
		}
	}
	// %s 는 뭔가의 주소값을 받는다. 
	// arr(100번지)이 null문자를 만날때까지 딱 출력 (뒤의 널값은 안나오게)
	printf("\n|%s|",arr);
}