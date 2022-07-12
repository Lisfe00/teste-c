#include<stdio.h>

main(){

    int i, A[5], B[5], soma[5]

    for(i=0;i<5;i++){
        printf("digite um numero para o valor %i de A: ", i);
        scanf("%i", A[i]);
    }

    for(i=0;i<5;i++){
        printf("digite um numero para o valor %i de B: ", i);
        scanf("%i", B[i]);
    }

    for(i=0;i<5;i++){

        soma[i] = A[i] + B[i];

        printf("A soma do valor %i de A e o valor %i de B e %i", i, i, soma[i]);
    }    
}