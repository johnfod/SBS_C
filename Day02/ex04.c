#include <stdio.h>

int main(void) {
    // 문자열
    // char 변수명 [문자열길이+1] = "문자열";
    char fruit[6] = "apple";    
    
    printf("과일 이름 : %s\n" , fruit);

    //배열
    // : 여러 자료를 묶어서 사용하는 자료형 마지막에 백슬래쉬0이 들어가야 되기 때문에 문자열길이에 +1을 작성하는 거임.

    return 0;
}