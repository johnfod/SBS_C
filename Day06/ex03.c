#include <stdio.h>

int main(void) {

    //문자열 변수 표현
    // 배열의 문자열 저장
    //'' : 한 문자
    // "" : 문자열 (여러문자)
    char greet[] = "Hello, C~!";
    printf("문자열의 내용 : %s", greet);
    printf("문자열의 크기 : %d\n", sizeof(greet));
    //sizeof() 함수
    //: 해당 병수의 byte단위의 크기를 반환
    // 널 문자
    // \0 : 문자열 마지막에 삽입되는 문자
    // 의미 : 데이터 없음, 문자열의 끝을 구분
    // [H][e][l][l][o][,][][C][~][!][\0]

    char mind[30] = "I Love Programming!";
    printf("%s\n", mind);

    // 'p'를 ''\0'로 대체
    mind[7] = '\0';   // 8번쨰 요소에 \0 추가
    printf("%s\n", mind);

    mind[1] = '\0';  // 2번째 요소에 \0cnrk
    printf("%s\n", mind);

    return 0;
    
}