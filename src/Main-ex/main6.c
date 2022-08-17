#include <stdio.h>

void main(){
	int i,j;
	int arr[2][3];
	int arr2[3][2];
	int sum=0;
	int sum2=0;
	int number=0;
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			arr[i][j] = i+j;
			sum2 += arr[i][j];
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			arr2[i][j] = arr[j][i];
		}
		//sum += arr2[i][0];
		//printf("%d", arr2[i][j]);
		number= arr2[2][0];
		
	}
	printf("%d",number);
}