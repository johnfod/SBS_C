#include <stdio.h>
/*
��ȯŸ�� �Լ���(�迭) {

}
*/

 int N = 5; // ���� ���� 

//������ ���� : �ּҰ��� �����ϴ� ����
    int max(int* arr) {
    int result = 0;

    result = arr[0];
    for (int i = 0; i < N; i++) {
        if (result < arr[i])
        {
            result = arr[i];
        }6546
        
    }
    
    return result;
}

int main(void) {
    int arr[5];
    int result = 0;
    printf("���� 5�� �Է� : ");
    for (int i = 0; i < N; i++)
    {
        //�迭�� ����
        scanf("%d", &arr[i]);
    }

    // �ִ� = �Լ�ȣ�� -- �迭�� ����
    // �迭�� �̸� : ù��° �ּ�
    result = max(arr);

    //��� - �ִ�
    printf("�ִ� : %d\n", result);
}