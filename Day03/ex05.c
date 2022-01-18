#include <stdio.h>
#define MAX 100
int main(void) {
    // 프로그램 실행 동안 변하지 않는 값 - 상수
    // - 키워드 : const
    int number = 3;
    const int NUM = 5;

    //상수는 값을 변경할 수 있음
    number = 10;

    //상수는 값을 변경할 수 없음
    // NUM = 10; ,, //(에러)

    printf("number(변수) : %d \n", number);
    printf("NUM,(변수) : %d \n", number);
    printf("MAX,수) : %d \n", NUM);

    return 0;
}