#include <stdio.h>
int main(viode) {
    int N;
    char S[20];
    printf("����: ");
    scanf("%d", &N);

    switch( N ) {
        case 100:  
        case 90:
        printf("������ A�Դϴ�.");  
        break;
        case 80:  
        case 70:
        printf("������ B�Դϴ�.");
        break;
        case 60:  
        case 50:
        printf("������ c�Դϴ�.");
        break;
        default:
        printf("����\n");
        break;
    }

   return 0;
}