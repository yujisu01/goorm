#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int arr[2][3]= {1,2,3,4,5,6};
	// 3행짜리로 재구성하라는 의미...!? 아무것도 할당하고 있지 않음 걍 아무의미없음 아직
	int (*p)[3] = NULL;
	// p에 arr대입하면서, 논리적으로 3열로 재구성하라는 의미. arr->p
	// 그냥 p가 1 2 3
	//		   4 5 6  이렇게 있다는겨 
	// 2차원 배열을 대입했다는것은, 논리적으로 재배치 했다는거 
	p=arr;
	
	// p[0]+1 = 101번지의 값 + 103+2 = 105번지의 값 = 2+6 = 8
	printf("%d,", *(p[0]+1) + *(p[1]+2));
	// p+1 = p[1]=103 + 0 = 103번지의 값 = 4
	// p+1 = p[1]=103 + 1 = 104번지의 값 = 5
	// 4+5 = 9 
	printf("%d", *(*(p+1)+0) + *(*(p+1)+1));
	return 0;
}
// 다만 p+1이 다음행대표주소를 가리키게 되는 이런경우는 2차원배열만 해당한다.