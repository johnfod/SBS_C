#include <stdio.h>

// �迭
// : ���� �ڷ����� ���� ���� ���� ���� �����ϴ� ����
// ex) ���� : int a1 = 10;
//           int a2 = 20;
//           int a3 = 30;
//           int sum = a1 + a2 + a3;
//           double avg = (double) sum / 3;

//       �迭 : int arr[5] = {10,20,30,40,50};
//  �迭 ���� : �ڷ��� ������[�迭�� ����];
//   �迭��� : �迭�� �����ϴ� ������ ����
//�迭�� ���� : ����� ����
// �迭 ��� ���� : ������ȣ(index):�� �迭 ����� ��ġ�� ����
//          �ε���(index)�� 0���� �����ϰ�, ���� ������ ���´�.
//          ex) 30 ---->  arr[2]    

 int main(void) {
     //10���� �л��� ������ �Է¹޾�, 
     //�ղ� �� ����� ���Ͽ� ����Ͻÿ�.
     int sum = 0;
     int student[10];
    // �ݺ� ���� i : 
     for (int i = 0; i < 10; i++)
     {
        scanf("%d", &student[i]);
     }

     for (int i = 0; i < 10; i++)
     {  
        sum += student[i];
     }
     
     double avg = 0.0;
     avg = (double) sum / 10;
     printf("�հ� : %d\n", sum);
     printf("�� : %f\n", avg);

     return 0;
    
}