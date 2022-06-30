#include <stdio.h>


 main()
{
    int menu;
    float salario;
    
    printf("Menu de opções: \n 1.Imposto \n 2.Novo Salario \n 3.Classificação \n 4.Finalizar programa \n Digite a opção desejada: ");
    scanf("%d", &menu);

    while(menu != 4){
        
        printf("Qual o seu Salario? ");
        scanf("%f", &salario);
        
        
        if(menu == 1){
            
            if(salario < 500){
                printf("o imposto e de %.2f", salario*0.05);
            }else if(500 <= salario < 850){
                printf("o imposto e de %.2f", salario*0.1);
            }else{
                printf("o imposto e de %.2f", salario*0.15);
            }
        }
        
        if(menu == 2){
            
            if(salario < 450){
                printf("O Novo salario e %.2f", salario + 100);
            }else if(450 <= salario < 750){
                 printf("O Novo salario e %.2f", salario + 75);
            }else if(750 <= salario <= 1500){
                 printf("O Novo salario e %.2f", salario + 50);
            }else{
                 printf("O Novo salario e %.2f", salario + 25);
            }
        }
        
        if(menu == 3){
            
            if(salario <= 700){
                printf("Mal remunerado");
            }else{
                printf("Bem remunerado");
            }
        }
        
        printf("\n \nMenu de opções: \n 1.Imposto \n 2.Novo Salario \n 3.Classificação \n 4.Finalizar programa \n Digite a opção desejada: ");
        scanf("%d", &menu);
    }

}