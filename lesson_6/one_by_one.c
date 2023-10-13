#include <stdio.h>
#include <string.h>
#include <stdint.h>
int main(){
    char str[100];

    scanf("%s",str);
    for(int i=0; i<strlen(str); i++){
        if(i%2!=0){
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}

