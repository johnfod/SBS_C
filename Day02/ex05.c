#include <stdio.h>   // ǥ��������� �ٷ�,�� �������
#include <string.h>  // ���ڿ��� �ٷ�� �������

int main(void) {
    char phone[10] = "Samsung";

    printf("����Ʈ�� �̸� : %s \n", phone);
    // ���ڿ� ���� �Լ� - strcpy
    // strcpy()
    strcpy(phone, "IPhone 12");
    printf("����Ʈ�� �̸� : %s \n", phone);

    return 0;
}