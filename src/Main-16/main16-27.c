#include<stdio.h>
int main(){
	int ary[5] = {10,11,12,13,14};
	int *ap;
	ap=ary;
	printf("%d,", ary[1]);
//  ---------------------
	// 100번지+1 = 숫자 101 출력
	printf("%d,",ary+1);
	// 100번지 + 1 = 10 + 1=11
	printf("%d,",*ap+1);
	// ary'의'값 = 10+1 = 11
	printf("%d,",*ary+1);
	// ap의 값 = 100번지(=10) 출력하고, 그다음 ++ = 10
	printf("%d,",*ap++);
	// 선증가 해서 ap의 값 = 101번지 = 11
	printf("%d,",++*ap);
	// 위랑 같음
	printf("%d,",*ap++);
	// ap를 ++해서 101번지 = 101번지 '의'값 =11
	printf("%d\n",*++ap);
	return 0;
}


// 다음 c프로그램에서 밑줄친 코드의 실행결과와 동일한 결과를 출력하는 코드로 옳은것만을 
// 모두고르면?

// ㄱ.printf("%d",ary+1);
// ㄴ.printf("%d",*ap+1);
// ㄷ.printf("%d",*ary+1);
// ㄹ.printf("%d",*ap++);
// ㅁ.printf("%d",++*ap);
// ㅂ.printf("%d",*ap++);
// ㅅ.printf("%d",*++ap);

// printf문은 내가 임의로 적은거여서 ++ 이 진행되어버림
// 실제로 이런문제가 나오면 ㄴ,ㄷ,ㅁ,ㅅ 이 정답임 (연산자가 진행 안되므로)