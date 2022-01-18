#include <stdio.h>   // 표준입출력을 다룬,ㄴ 헤더파일
#include <string.h>  // 문자열을 다루는 헤더파일

int main(void) {
    char phone[10] = "Samsung";

    printf("스마트폰 이름 : %s \n", phone);
    // 문자열 복사 함수 - strcpy
    // strcpy()
    strcpy(phone, "IPhone 12");
    printf("스마트폰 이름 : %s \n", phone);

    return 0;
}