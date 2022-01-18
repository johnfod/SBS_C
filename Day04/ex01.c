#include <stdio.h>

int main(void) {

    int num =3;
    printf("정수 입력 : ");
    scanf("%d", &num);


    if( num < 3 )
    printf("변수 num 은 3보다 작습니다. \n");

    if( num == 3 )
    printf("변수 num 은 3입니다. \n");

    if( num > 3 )
    printf("변수 num 은 3보다 큽니다. \n");

    return 0;
    

}