#include <stdio.h>
#include <string.h>

/*
구조체
: 다양한 자료형의 변수들을 묶어서 정의한 새로운 자료형
*/
struct preson {
    char name[30];
    int age;
};

int main(void) {
    //구조체 선언
    struct preson boy, girl;

    //멤버 접근 연산자 (.)
    //boy와 girl의 name에 문자열 복사
    strcpy (boy.name, "김코딩");
    strcpy (girl.name, "이코딩");

    boy.age = 20;
    girl.age = 10;

    printf("boy 의 이름은 %s, 나이는 %d \n", boy.name, boy.age);
    printf("girl 의 이름은 %s, 나이는 %d \n", girl.name, girl.age);
   
    return 0;
}