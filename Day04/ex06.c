#include <stdio.h>
int main(viode) {
    int N;
    char S[20];
    printf("메뉴 번호 : ");
    scanf("%d", &N);

    switch( N ) {
        case 1:  
        printf("아메리카노\n");  
        break;
        case 2:       
         printf("카페라떼\n");    
        break;
        case 3:     
        printf("아이스티\n");    
        break;
        default:           
        printf("없음\n");  
         break;
    }

   return 0;
}