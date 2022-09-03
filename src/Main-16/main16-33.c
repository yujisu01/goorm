#include<stdio.h>
void main(){
	// []행 5열 정의함 
	// 100번지 str[0]  |A|B|C|null|  |   => 총 5칸 정의해놓음
	// 105번지 str[1]  |1|2|3|null|  |
	// 110번지 str[2]  |Q|W|E|null|  |
	char str[][5] = {"ABC","123","QWE"};
	for(int i=0; i<3; i++){
		// 일단 그래서 번지수와 상관없이 해당 문자열들 다 출력해주면됨
		// %s는 주솟값을 갖는건데, str[i]가 행 대표주소를 가지고 있으니,
		// 그 행의 대표주소부터 null문자 만날때까지 출력
		printf("%s", str[i]);
	}
}