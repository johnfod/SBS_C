#include <stdio.h>
#include <string.h>

/*
����ü
: �پ��� �ڷ����� �������� ��� ������ ���ο� �ڷ���
*/
struct preson {
    char name[30];
    int age;
};

int main(void) {
    //����ü ����
    struct preson boy, girl;

    //��� ���� ������ (.)
    //boy�� girl�� name�� ���ڿ� ����
    strcpy (boy.name, "���ڵ�");
    strcpy (girl.name, "���ڵ�");

    boy.age = 20;
    girl.age = 10;

    printf("boy �� �̸��� %s, ���̴� %d \n", boy.name, boy.age);
    printf("girl �� �̸��� %s, ���̴� %d \n", girl.name, girl.age);
   
    return 0;
}