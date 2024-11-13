#include <stdio.h>
 
int main() {
    int x, y, m;
    int xi, yi;
    
    while(scanf("%d %d %d", &x, &y, &m) != EOF){
        for(int i=0; i<m; i++){
            scanf("%d %d", &xi, &yi);
            if((xi>x || yi>y) && (xi>y || yi>x))
                printf("Nao\n");
            else 
                printf("Sim\n");
        }
    }
 
    return 0;
}