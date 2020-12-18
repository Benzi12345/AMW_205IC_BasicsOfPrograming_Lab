
#include <stdio.h>

int main() {


    printf("Prosty kalkulator\n");

    printf("-------------------------------------------------------------\n\n");

    printf("Wpisz działanie: ");

    float a,b;

    char znak;

    float Suma,Roznica,Iloczyn,Iloraz;

    scanf("%f",&a);

    scanf("%c",&znak);

    scanf("%f",&b);

    if(znak == '+')

    {

        Suma=a+b;

        printf("Wynik dzialania: %f",Suma);

    }

    else if(znak == '-')

    {

        Roznica=a-b;

        printf("Wynik dzialania: %f",Roznica);

    }

    else if(znak == '*')

    {

        Iloczyn=a*b;

        printf("Wynik dzialania: %f",Iloczyn);

    }

    else

    {

        Iloraz=a/b;

        printf("Wynik dzialania: %f",Iloraz);

    }

    return 0;

}