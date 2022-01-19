#include <stdio.h>
int main(viode) {
    int N;
    char S[20];
    printf("성적: ");
    scanf("%d", &N);

    switch( N ) {
        case 100:  
        case 90:
        printf("성적은 A입니다.");  
        break;
        case 80:  
        case 70:
        printf("성적은 B입니다.");
        break;
        case 60:  
        case 50:
        printf("성적은 c입니다.");
        break;
        default:
        printf("없음\n");
        break;
    }

   return 0;
}