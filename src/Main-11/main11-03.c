#include<stdio.h>
void digitVal(int num)
{	
	// (2) 일단 조건에 안맞음
	// (5) digitVal(5)는 num보다 크니 else문으로 이동
	if(num<2){
		printf("%d",num);
	}
	else{
		// (3) 식이 없으니 이 식을 stack에 쌓을필요없고
		//     이 printf에는 인자로 받은 10값을 스택에 쌓아놓음
		//     digitVal()은 맨마지막에 수행함.
		// (4) digitVal(num/2) 수행해서 5값이 digitVal(5) 들어감
		// (6) 현재 digitVal(5)가 있음. num/2 다시 수행해주므로 인해 현재 2값있음.
		//     계산하지 말고 일단 스택에 쌓아놓음 (현재 2 있음)
		digitVal(num/2);
		printf("%d",num%2);
	}
}
void main(){
	// (1) 인자로 받은 10값 스택에 저장
	digitVal(10);
}

// ㅅㅂ뭔말이여 
// (1) digitVal(10) 인자값으로 받음. (스택 저장=10)
// (2) if문 조건안맞으므로, else문으로 이동.
// (3) digitVal(num/2) = 10/2 = 5 (스택 저장=5)
// (4) digitVal(num/2) = 5/2 = 2 (스택 저장=2)
// (5) digitVal(num/2) = 2/2 = 1 (스택 저장=1) 
// (6) digitVal(num/2) = 식 해서 else문 갈려고하는데 
//     현재 num값은 1이므로 if문에 부합함. 
// (7) 현재 스택에는, 10  5  2   이렇게 있고 if문의 printf문에는 1 출력
// (8) else문의 printf문에는 num%2 차례대로 출력하면됨 (10&2=0, 5%2=1, 2%2=0)