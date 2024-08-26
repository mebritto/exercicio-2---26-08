#include <stdio.h>
#include <stdlib.h>



int main(){

    int n, x;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &n);

    x = 2;

    while(x<n){
        if(n%x==0){
            printf("%d nao eh primo", n);
        break;
        }
        x++;
    }
    if(x==n){
        printf("%d eh primo", n);
    }

return 0;
    }

