#include <stdio.h>
#include <stdlib.h> // ���� �Ҵ� �Լ��� ���ǵǾ� ����

/*
   malloc(size)
   :�޸𸮸� size(byte) ��ŭ �������� �Ҵ��ϴ� �Լ�
   - �Ҵ�� �޸� ������ �ּҰ��� ��ȯ (void*)
   - ��ȯ�� �ּҰ��� �����ͺ����� �����ϱ� ���ؼ� 
     ���� ����ȯ�� ����ؾ��Ѵ�.
*/
int main(void) {

    // int���� �޸𸮰��� 5���� �Ҵ�
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
    
    //�������� �Ҵ�� �޸𸮸� ����
    //free(������)      : ���� �Ҵ��� �޸� ������ �����ϴ� �Լ�
    if ( ptr != NULL )
        free(ptr);
    if ( dptr != NULL )
        free(dptr);
    return 0;
}