#include<stdio.h>
// for문 범위.. printf문 위치 확인..
void main(){
	int num[3][3]={{5,9,7},{9,2,3},{3,9,4}};
	// (3) 바깥for문 안끝났으므로, i=1 (2번째행) for문 돌림...
	// 		i=2(3번째행)도 for문 이어서 돌림..
	for(int i=0; i<3; i++){
		// (2) j<3 for문 끝내고, 이 for문 빠져나와서 위에 for문 아직 안끝났으니까 
		//  	위로 이동 (엔터찍고)
		for(int j=0; j<3; j++){
			// (1) i=0일때의 for문 작동 {5,9,7}모두 if 조건문 해당하므로 출력
			if(num[i][j]%2 != 0){
				printf("%d,",num[i][j]);
			}
			else{
				break;
			}
		}
		printf("\n");
	}
}