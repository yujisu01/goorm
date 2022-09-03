#include<stdio.h>
struct person{
	char *name;
	int age;
};
// 그대로 출력됨 
int main(void){
	struct person user1;
	user1.name="jisu";
	user1.age=43;
	
	struct person user2;
	user2.name="hayoung";
	user2.age=13;
	
	printf("%s, %d\n", user1.name, user1.age);
	printf("%s, %d\n", user2.name, user2.age);
	
	return 0;
}