#include <stdio.h>

int main(void) {
    int n = 1;
    //for문에서의 무한 반복
    for ( ; ; )
    {
        printf("n: %d\n", n);
        n++;
        if( n == 30 )
        break;

    }
    return 0;   
    
}