#include <stdio.h>

/*
���ڿ��� ������
*���ڿ��� ǥ��
: ���ڿ��� ("") ū ����ǥ�� ��Ÿ����.
  ���ڷ� �̷���� �迭�� ���ڿ��� �����Ѵ�.
  ���ڿ��� �� : ��(null) ���ڷ� ǥ�� (\0)

  1.�迭 ��� ���ڿ� ����
  ex)char greet[] = "Hello!";
  ����� �� ���� �Ұ�
  ���ο� ���ڿ��� �Ҵ� �Ұ�

  2. ������ ���� ��� ���ڿ� ����
   char * greet = "Hello!";
   -����� �� ���� �Ұ�
   ���ο� ���ڿ� �Ҵ� ����
   1206020046

*/
int main(void) {

    char str1[] = "Hello C~!";
    char *str2 = "Hello C~!";

    printf("�迭 ��� ���ڿ� str1[] \n");
    printf("%s\n", str1);

    printf("������ ���� ��� ���ڿ� *str2 \n");
    printf("%s\n", str2);

    str1[6] = 'A';    // ��� ���� ����
    // str1 = "Bye Bye~!"   ���ο� ���ڿ� �Ҵ� �Ұ�

    str2[6] = 'A';            //��� ���� �Ұ�
    str2 = "Bye Bye~!";    // ���ο� ���ڿ� �Ҵ簡��

    printf("%s\n", str1);
    printf("%s\n", str2); 

    return 0;   
}