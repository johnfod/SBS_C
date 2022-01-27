#include <stdio.h>

/*
문자열고 포인터
*문자열의 표현
: 문자열의 ("") 큰 따옴표로 나타낸다.
  문자로 이루어진 배열에 문자열을 지정한다.
  문자열의 끝 : 널(null) 문자로 표시 (\0)

  1.배열 기반 문자열 선언
  ex)char greet[] = "Hello!";
  요소의 값 변경 불가
  새로운 문자열을 할당 불가

  2. 포인터 변수 기반 문자열 선언
   char * greet = "Hello!";
   -요소의 값 변경 불가
   새로운 문자열 할당 가능
   1206020046

*/
int main(void) {

    char str1[] = "Hello C~!";
    char *str2 = "Hello C~!";

    printf("배열 기반 문자열 str1[] \n");
    printf("%s\n", str1);

    printf("포인터 변수 기반 문자열 *str2 \n");
    printf("%s\n", str2);

    str1[6] = 'A';    // 요소 변경 가능
    // str1 = "Bye Bye~!"   새로운 문자열 할당 불가

    str2[6] = 'A';            //요소 변경 불가
    str2 = "Bye Bye~!";    // 새로운 문자열 할당가능

    printf("%s\n", str1);
    printf("%s\n", str2); 

    return 0;   
}