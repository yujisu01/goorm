#include<stdio.h>
int main(){
	int i,j,k,m,n;
	i=j=k=m=n=3;
	i += ++j + 3;
	k %= m = 1+n/2;
	printf("%d,", i);
	printf("%d,", k);
	printf("%d,", m);
}