#include <stdio.h>
int main(viode) {
    int N;
    char S[20];
    printf("�޴� ��ȣ : ");
    scanf("%d", &N);

    switch( N ) {
        case 1:  
        printf("�Ƹ޸�ī��\n");  
        break;
        case 2:       
         printf("ī���\n");    
        break;
        case 3:     
        printf("���̽�Ƽ\n");    
        break;
        default:           
        printf("����\n");  
         break;
    }

   return 0;
}