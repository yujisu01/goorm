#include<stdio.h>
void main(){
	printf("%d\n",123);
	// 5개공간 확보하여 출력, 앞자리 공백공백
	printf("%5d\n",123);
	// 뒤에 공백공백 해서 5칸확보
	printf("%-5d\n",123);
	// 앞에 0 붙임
	printf("%05d\n",123);
	// 소수점을 포함해서 6자리 확보하고(앞자리 공백), 소수점1자리수까지 출력해라. 
	printf("%6.1f\n",123.17);
	// 7개공간 확보하고, 앞자리를 0으로 하면됨. 소수점은 2자리수까지 출력
	printf("%07.2f\n",123.45);
	// 3.2라도 3자리만 표현하는거아님, 뒤에 .2 가 있으므로 123.45 다출력
	printf("%3.2f\n",123.45);
}