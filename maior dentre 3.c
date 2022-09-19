#include<stdio.h>

int main()
{
    int v1, v2, v3, maior, meio, menor;
    printf ("Insira o primeiro número:");
    scanf("%i", &v1);
    printf ("Insira o segundo número:");
    scanf("%i", &v2);
    printf ("Insira o primeiro número:");
    scanf("%i", &v3);
    if (v1>v2 && v1>v3 && v2>v3)
    {
        maior=v1;
        meio=v2;
        menor=v3;
    }
    else if (v1>v2 && v1>v3 && v2<v3)
    {
        maior=v1;
        meio=v3;
        menor=v2;
    }
    else if (v2>v1 && v2>v3 && v1<v3)
    {
        maior=v2;
        meio=v1;
        menor=v3;
    }
    else if (v2>v1 && v2>v3 && v1<v3)
    {
        maior=v2;
        meio=v3;
        menor=v1;
    }
    else if (v3>v1 && v3>v1 && v1<v2)
    {
        maior=v3;
        meio=v2;
        menor=v1;
    }
    else if (v3>v1 && v3>v1 && v1>v2)
    {
        maior=v3;
        meio=v1;
        menor=v2;
    }
    printf ("%i< %i< %i", menor, meio, maior);
}