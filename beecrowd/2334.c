#include <stdio.h>

int main() {
    unsigned long long P;

    while (1) {
        scanf("%llu", &P);
        if (P == (unsigned long long)-1) {
            break;
        } 
        
        if(P==0){
            printf("0\n");
        }else{
            printf("%llu\n", P-1);
        }
    }

    return 0;
}
