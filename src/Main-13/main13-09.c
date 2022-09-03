#include<stdio.h>
// x+2 * y-1 인데 괄호가 있네?
// (x+2) * (y-1) = (5) * (4) = 20
#define MUL(X,Y) (X)*(Y)
void main(){
	int x=3;
	int y=5;
	printf("%d", MUL(x+2, y-1));
}