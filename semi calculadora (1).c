#include<stdio.h>

void main()
{
    int v1, v2, fator;
    float final;
    printf("Insira o primeiro valor:");
    scanf("%i",&v1);
    printf("Insira o segundo valor:");
    scanf("%i",&v2);
    printf("Insira o valor da operação correspondente:");
    scanf("%i",&fator);
    if (fator==1)
    {
    final=v1+v2;
    }
    else if (fator==2)
    {
    final=v1-v2;
    }
    else if (fator==3)
    {
    final=v1*v2;
    }
    else if (fator==4)
    {
        if(v2==0){
        printf("Não existe divisão por 0");
        else{
        final=v1/v2;
        }
    
    }
    else{
    printf("Essa não é uma operação valida");
    }
    printf("o valor da operação é: %.2f", final);
}