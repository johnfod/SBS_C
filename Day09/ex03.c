#include <stdio.h>

/*
   EOF(End of file)
   :�ؽ�Ʈ ������ ���� ǥ���ϱ� ���� ���

   getchar() �Է��Լ��� EOF ��ȯ�ϴ� ���
   1. �Լ� ȣ�� ���� : �о���� �����Ͱ� ���� ��
   2. CTRL + Z,                                       CTRL + C �� �Է��ϴ� ��� -----> ���ڿ� �Է��� �����մϴ�.

   EOF : �Է��Լ��� ���ؼ� ���� �Է��� �����ϴ� �ǹ�
*/
int main(void) {

    int ch;
    while (1) {
        ch = getchar();

        if ( ch == EOF )
        
            break;   // �ݺ��� Ż��

            putchar(ch);
        }
    
    return 0;
   
}