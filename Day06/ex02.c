#include <stdio.h>

int main(void) {

    // �л��� ���� N���� �Է¹ް�,
    // �� �л��� ������ N����ŭ  �Է� �޾Ƽ�
    // ������ �ղ��� ����� ���Ͻÿ�.
    int N;
    printf("�л��Ǽ� : ");
    scanf("%d", &N);
    getchar();      // �Է� ������ ������ ���

    int student[N];
    int sum = 0;
    double avg = 0.0;
    for (int i = 0; i < N; i++)
    {
        printf("�л� %d�� ���� : ", i+1);
        scanf("%d", &student[i]);
        getchar();
        sum = sum + student[i];
    }
    //(���) = (����) / (����)

    avg = (double) sum / N;

    printf("�л� ������ �հ� : %d\n", sum);
    printf("�л� ������ ��� : %f\n", avg);
    
}