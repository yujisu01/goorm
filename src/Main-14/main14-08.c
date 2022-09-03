#include<stdio.h>
void main(){
	int i;
	char ch;
	//  n a t i o n null  ==> 총 7공간
	char str[7] ="nation";
	for(i=0; i<4; i++){
		// ch에 str[5-i]값 넣어주고, str[5-i]에 str[i]값, str[i]에 ch대입
		// str[4] 일떄 i값 1, ch=o
		// str[3] 일때 i값 2, ch=t 
		// str[2] 일때 i값 3, ch=i
		// str[1] 일때 i값 4, ch=a 
		// n o t i a n 
		ch = str[5-i];
		str[5-i] = str[i];
		str[i] = ch;
	}
	// 하나하나 해보기 일단 
	printf("%s\n", str);
}

// Q9. double형 포인터변수ptr의 번지가 1000번지라고 가정했을때,
// 		ptr+3의 실제번지는?

// 	=> 원래는 바이트 수만큼 돌아감. double형은 8바이트씩 돌아감.
//     ptr번지는 1000번지이므로 8*3 해서 
// 		1024 번지임.



// Q10. 32비트 컴터에서 int형 포인터변수 ptr의 번지가 1000번지라 가정했을때
// 		ptr+3의 실제번지는?

// 	=> ptr이 1000번지이고 int형이라서 4바이트씩 움직이니 
//		1000+(3*4)= 1012 이다. 
