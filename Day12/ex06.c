#include <stdio.h>
#include <stdlib.h>

char * getString(void) {
    char * str = (char*) malloc ( sizeof(char) * 100);
    printf("내가 좋아하는 색깔 : ");
    gets(str);
    return str;
}


int main(void) {

    char* result = getString();
    printf("내가 좋아하는 색깔은? %s\n", result);
    if ( result != NULL )
        free(result);
        
    return 0;
}