#include <stdio.h>


int main() {
    int num1 = 20, num2 = 10;
    int result;

    //AND ���� (&&)
    result = 1 && 1;
    printf("result 1 : %d\n", result);

    // �� �� ���� ����Ű ��Ʈ ����Ʈ �Ʒ�����Ű
    //���� ���� ��Ʈ�� ����Ʈ ����
   result = num1 ==20 && num2 == 10;
    printf("result 2 : %d\n", result);

    result = 0 || 1;
    printf("result 3 : %d\n", result);
    // �� �� �̵� ��Ʈ �Ʒ������

    result = 0 || 0;
    printf("result 4 : %d\n", result);

    //not ����

    printf("result 5 : %d\n", !0);
    printf("result 6 : %d\n", !1);

    return 0;
}