#include <stdio.h>

void main(){
	int i, j;
	int sum=0;
	int arr[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr[i][j] = i+j;
			if( i%2 == 0){
				sum += arr[i][j];
			}
			else{
				sum -= arr[i][j];
			}
		}
	}
	printf("%d", sum);
}