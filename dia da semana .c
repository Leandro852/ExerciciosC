#include<stdio.h>

void main()
{
    int dia;
    printf("insira o número desejado:");
    scanf("%i", &dia);
    if (dia==1)
    {
    printf("domingo");
    }
    else  if (dia==2)
    {
    printf("segunda-feira");
    }
    else  if (dia==3)
    {
    printf("terça-feira");
    }
    else  if (dia==4)
    {
    printf("quarta-feira");
    }
    else  if (dia==5)
    {
    printf("quinta-feira");
    }
    else  if (dia==6)
    {
    printf("sexta-feira");
    }
    else  if (dia==7)
    {
    printf("sabado");
    }
    else
    {
    printf("Esse não é um valor válido");
    }
}