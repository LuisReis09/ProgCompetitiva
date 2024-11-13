#include <stdio.h>

int main (){
	unsigned long long a, b, i, res = 0;
	scanf("%llu %llu", &a, &b);
	
    res = ((a + b) * (b - a + 1)) / 2;
    
    printf("%llu\n", res);
    return 0;
}