#include <stdio.h>
#include <stdlib.h> // 동적 할당 함수가 정의되어 있음

/*
   malloc(size)
   :메모리를 size(byte) 만큼 동적으로 할당하는 함수
   - 할당된 메모리 공간의 주소값을 반환 (void*)
   - 반환된 주소값을 포인터변수로 저장하기 위해서 
     강제 형변환을 명시해야한다.
*/
int main(void) {

    // int형의 메모리공간 5개를 할당
    int *ptr = (int *) malloc( sizeof(int) * 5 );
    double *dptr = (double *) malloc (sizeof(double) * 3);

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = (i+1) * 10;
    }

    for (double i = 0; i < 3; i++)
    {
        dptr[i] = (i+1) * 1.5;    
    }
    
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%f ", dptr[i]);
    }
    printf("\n");
    
    //힙영역에 할당된 메모리를 해제
    //free(포인터)      : 동적 할당한 메모리 공각을 해제하는 함수
    if ( ptr != NULL )
        free(ptr);
    if ( dptr != NULL )
        free(dptr);
    return 0;
}