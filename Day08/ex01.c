#include <stdio.h>

// 배열
// : 같은 자료형을 갖는 여러 개의 값을 저장하는 변수
// ex) 변수 : int a1 = 10;
//           int a2 = 20;
//           int a3 = 30;
//           int sum = a1 + a2 + a3;
//           double avg = (double) sum / 3;

//       배열 : int arr[5] = {10,20,30,40,50};
//  배열 선언 : 자료형 변수명[배열의 길이];
//   배열요소 : 배열을 구성하는 각각의 값을
//배열의 길이 : 요소의 개수
// 배열 요소 접근 : 순서번호(index):로 배열 요소의 위치를 지정
//          인덱스(index)는 0부터 시작하고, 양의 정수만 갖는다.
//          ex) 30 ---->  arr[2]    

 int main(void) {
     //10명의 학생의 성적을 입력받아, 
     //합꼐 및 평균을 구하여 출력하시오.
     int sum = 0;
     int student[10];
    // 반복 변수 i : 
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
     printf("합계 : %d\n", sum);
     printf("평군 : %f\n", avg);

     return 0;
    
}