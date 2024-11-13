#include <stdio.h>
 
int main() {
    int N, A, B;
    int R, aux, v, save;
    
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &A, &B);
        if(B==A){
            printf("encaixa\n"); 
            continue;
        }
        
        save= A;
        R = v =  0;
        aux= 1;
        while(R<save){
            R= R + ((A%10)*aux);
            aux *= 10;
            A= A/10;
            if(R==B){
                printf("encaixa\n");
                v= 1;
                break;
            }
        }
        
        if(v==0)
            printf("nao encaixa\n");
    }
 
    return 0;
}