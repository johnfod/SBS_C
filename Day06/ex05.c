#include <stdio.h>

int main(void) {

    // 2차월 배열 선언
    int arr[2][3] = { {1,2,3}, {4,5,6} };
    // (int : 4byte) x (6개) = 24byte
    printf("%d\n", sizeof(arr) / sizeof(int) );
    printf("%d\n", sizeof(arr) / sizeof(arr[0]) ); //행의 개수
    printf("%d\n", sizeof(arr[0]) / sizeof(int) ); // 열의 개수

    int row = sizeof(arr) / sizeof(arr[0]); //행의 개수
    int col = sizeof(arr[0]) / sizeof(int); //열의 개수
    
    //바깥 for문 : 열
    for (int i = 0; i < row; i++){
        // 안 for문 : 열
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
     

}