#include<stdio.h>
struct person{
	char name[10];
	int age;
};
int main(){
	// s[]라는 이름으로 사용할거고, 배열형태로 생성
	// 기본값 존재함. 임의로 자름?
	// 100 s[0]= Kim  36
	// 101 s[1]= Lee  43
	// 102 s[2]= Choi 45
	// 103 s[3]= Park 32
	struct person s[]= {"Kim",36,"Lee",43,"Choi",45,"Park",32};
	// person이라는 구조체를 참조할수 있는 p선언
	struct person *p;
	// p에 s값 집어넣음 (100번지)
	p=s;
	// p ++시키면 101번지 값
	p++;
	// p가 가리키는 101번지의 name => Lee
	printf("%s,",p->name);
	// p가 가리키는 101번지의 age => 43
	printf("%d\n",p->age);
	return 0;
}