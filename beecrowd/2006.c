#include <stdio.h>

int main(){
    unsigned char gabarito;
    unsigned char tentativas[5];
    unsigned char acertos = 0;

    // Como os numeros sao bem pequenos, podemos usar char para economizar memoria

    scanf("%c", &gabarito);
    for(int i=0; i<5; i++){
        scanf(" %c", &tentativas[i]);
        if(tentativas[i] == gabarito) acertos++;
    }

    printf("%d\n", acertos);


    return 0;
}