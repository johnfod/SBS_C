#include <stdio.h>

/*
    typedef
    : 기존 자료형에 새로운 이름을 부여하는 키워드
      typedef 기존  자료형 새로운 자료형;
    ex) typedef int INT;
        typedef struct {

        } 새로운 이름;

        typedef struct 구조체이름 새로운 이름;
    
    구조체 선언 : struct 구조체이름 변수이름;

    typedef 사용 시 구조체 선언
    - typedef struct 구조체이름 새로운 이름;
    - 선언 : 새로운 이름 변수이름;
*/

// 구조체 정의와 동시에 typedef 선언
typedef struct {
    int x;
    int y;
} POINT;

//구조체 정의
struct preson{
   char name[30];
   int age; 
};

// 정의된 구조체를 typedef 선언
typedef struct preson PRESON;

int main(void) {
    POINT position = {30, 40};
    PRESON p = {"김코딩", 10};

    printf("(x, y) = (%d, %d)\n", position.x, position.y);
    printf("%s : %d\n", p.name, p.age);

    return 0;
}