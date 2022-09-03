#include<stdio.h>
int main(){
	char *array1[2]={"Good Morning","C language"};
	// a1의 0번인덱스는 100번지이고 + 5 하면 = 105 // 105번지부터 문자열 출력 = M 
	printf("%s,", array1[0]+5);
	// a1의 1번인덱스는 200번지이고 + 6 하면 = 206 // 206번지의 값 = u 
	printf("%c",*(array1[1]+6));
}

// array1(10번지)| 100번지 | 200번지 |

// 100번지 G |o |o |d |  |m |o |r |n |i |n |g |
// 200번지 C |  |l |a |n |g |u |a |g |e |