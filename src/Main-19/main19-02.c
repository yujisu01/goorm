#include<stdio.h>
// 세그멘테이션 오류(core dumped) 뜸
int main(void){
	struct person{
	char *name;
	int age;
 }u1, *u2;
u1.name="A";
u1.age=30;
u2->name="B";
u2->age=40;
// A, 30
// B, 40  이렇게 출력됨
printf("%s, %d\n", u1.name, u1.age);
printf("%s, %d\n", u2->name, u2->age);

return 0;
}