#include<stdio.h>
int main(){
	int i,j;
	for(i=2; i<=3; i++){
		printf("i=%d\n",i);
		for(j=1; j<=9; j++){
			printf("%d * %d = %d\n", i,j,(i*j));
			if(j==2){
				// 2 * 1=2 , 3*1=3 만 출력되는게 X
				// 이 break가 속한 for문의 break를 건다.
				// j==2 였어도 첫번째 for문은 실행이 됐고 (j=2)
				// 두번째 for문도 실행이 됐기때문에 (j=2)
				// 해당 if문에서 break가 걸리고
				// 2 * 3, 3 * 3은 실행이 되지 않은것
				// * Main7-24번문제랑 비교하고 이해하기
				break;
			}
		}
	}
	return 0;
}