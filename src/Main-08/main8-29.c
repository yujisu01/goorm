#include<stdio.h>
int main(){
	int j,i,sum = 0;
	for(i=1; i<5; i++){
		for(j=1; j<5; j++){
			// 성립하면 continue로 두번쨰 for문으로 이동,
			if(j%3==0) continue;
			if(i%4==0) break;
			// 조건 만족시 증가 (j%3!=0, i%4!=0인것들)
			sum++;
		}
	}
	// 1단(~4)~4단까지 두 if문이 성립하면 sum값이 증가된다
	// 1단에서 sum이 3이 되었으므로, (j= 1,2,3,4)
	// 2,3,4단도 3씩 합해주면 12 일텐데 (j는 항상 동일하므로)
	// i값이 4일때는 if문(i%4==0)에 부합하지 않으므로 
	// 아예 실행이 안됨.
	// 따라서 sum값은 9가 됨.
	// * 패턴을 찾아야 함 
	printf("%d\n",sum);
	return 0;
}