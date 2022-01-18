#include <stdio.h>


int main() {
    int num1 = 20, num2 = 10;
    int result;

    //AND 연선 (&&)
    result = 1 && 1;
    printf("result 1 : %d\n", result);

    // 한 줄 복사 단축키 알트 시프트 아랫방향키
    //한줄 삭제 컨트롤 시프트 케이
   result = num1 ==20 && num2 == 10;
    printf("result 2 : %d\n", result);

    result = 0 || 1;
    printf("result 3 : %d\n", result);
    // 그 줄 이동 알트 아랫방향기

    result = 0 || 0;
    printf("result 4 : %d\n", result);

    //not 연산

    printf("result 5 : %d\n", !0);
    printf("result 6 : %d\n", !1);

    return 0;
}