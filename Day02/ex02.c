#include <stdio.h>

int main(void) {
    short sh = 32767;                      //short ���� �ִ밪���� �ʱ�ȭ
    int in = 2147483647;                   // �� 21���� �ִ��� ������ �ִ�.
    long ln = 2147483647;
    long long lln = 123451234512345;

    printf("sh : %d\n", sh );
    printf("in : %d\n", in );
    printf("in : %ld\n", ln );                // long ���� ���Ĺ��� %1d
    printf("in : %lld\n", lln );              // lomg long ���� ���Ĺ��� %lld

    return 0;

}