#include <stdio.h>

/*
    typedef
    : ���� �ڷ����� ���ο� �̸��� �ο��ϴ� Ű����
      typedef ����  �ڷ��� ���ο� �ڷ���;
    ex) typedef int INT;
        typedef struct {

        } ���ο� �̸�;

        typedef struct ����ü�̸� ���ο� �̸�;
    
    ����ü ���� : struct ����ü�̸� �����̸�;

    typedef ��� �� ����ü ����
    - typedef struct ����ü�̸� ���ο� �̸�;
    - ���� : ���ο� �̸� �����̸�;
*/

// ����ü ���ǿ� ���ÿ� typedef ����
typedef struct {
    int x;
    int y;
} POINT;

//����ü ����
struct preson{
   char name[30];
   int age; 
};

// ���ǵ� ����ü�� typedef ����
typedef struct preson PRESON;

int main(void) {
    POINT position = {30, 40};
    PRESON p = {"���ڵ�", 10};

    printf("(x, y) = (%d, %d)\n", position.x, position.y);
    printf("%s : %d\n", p.name, p.age);

    return 0;
}