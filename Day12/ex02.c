#include <stdio.h>


// 1. ��ȯ �� x, �Ű�����x
void func1(void) {
    printf("��ȯ�� x, �Ű����� x\n");
}

// 2. ��ȯ�� o, �Ű����� x
int func2(void) {
    // ��ȯ���� ���� ��,
    // �ݵ�� return �ۼ�
    printf("��ȯ�� o, �Ű����� x\n");
    return 100;
}

// 3. ��ȯ��x, �Ű����� o
void func3(int a, int b) {
    printf("��ȯ�� x, �Ű����� o\n");
    printf("a + b = %d\n", a + b);
}
//4. ��ȯ��o, �Ű����� o
int func4(int a, int b) {
    int sum = a + b;
    printf("��ȯ�� o, �Ű����� o\n");
    return sum;
}

int main(void) {
    // �Լ� ȣ��
    // : �Լ��� �����ϵ��� ��û�ϴ� ���
    // 1. 
    func1();

    // 2. 
    int result1 = func2();

    // 3. 
    func3(10, 20);

    // 4. 
    int result2 = func4(10, 20);

    printf("result1 : %d\n", result1);
    printf("result2 : %d\n", result2);
}