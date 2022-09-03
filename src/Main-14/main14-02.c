#include<stdio.h>
void main(){
	int i, sum;
	float avg;
	int jumsu[3];
	jumsu[0] = 90.0;
	jumsu[1] = 85.0;
	jumsu[2] = 94.0;
	
	for(i=0; i<3; i++){
		sum+= jumsu[i];
	}
	avg= sum/3.0;
	// 출력결과가 왜 i값 제대로 안잡지
	// 총점:269, 평균:89.67   --> 이렇게나와야 정답 (반올림 해줘야됌)
	printf("총점:%d, 평균:%.2f",sum,avg);
}