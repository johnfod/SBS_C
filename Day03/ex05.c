#include <stdio.h>
#define MAX 100
int main(void) {
    // ���α׷� ���� ���� ������ �ʴ� �� - ���
    // - Ű���� : const
    int number = 3;
    const int NUM = 5;

    //����� ���� ������ �� ����
    number = 10;

    //����� ���� ������ �� ����
    // NUM = 10; ,, //(����)

    printf("number(����) : %d \n", number);
    printf("NUM,(����) : %d \n", number);
    printf("MAX,��) : %d \n", NUM);

    return 0;
}