#include <stdio.h>

int main(void) {
    short sh = 32767;                      //short 형의 최대값으로 초기화
    int in = 2147483647;                   // 약 21억의 최댓값을 담을수 있다.
    long ln = 2147483647;
    long long lln = 123451234512345;

    printf("sh : %d\n", sh );
    printf("in : %d\n", in );
    printf("in : %ld\n", ln );                // long 형은 서식문자 %1d
    printf("in : %lld\n", lln );              // lomg long 형은 서식문자 %lld

    return 0;

}