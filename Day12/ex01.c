#include <stdio.h>

// ��������
int N = 10;

// ����� ���� �Լ�
int sum(int a, int b) {
    int result = a + b;
    return result;
}

// main �Լ�
// : ���α׷� ���� ��, ���� ���� ����Ǵ� �Լ�
int main(void) {

    int x = 10;
    int y = 20;
    int result = sum(x,y);

    printf("�հ� : %d\n", result);
   return 0;
}