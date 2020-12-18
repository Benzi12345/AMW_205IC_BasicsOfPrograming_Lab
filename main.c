#include <stdio.h>

int main()
{
    int liczba1,liczba2;
    float result;
    char ch;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d",&liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%d",&liczba2);

    printf("Wybierz dzialanie na liczbach(+,-,*,/,): ");
    scanf(" %c",&ch);

    result=0;
    switch(ch)
    {
        case '+':
            result=liczba1+liczba2;
            break;

        case '-':
            result=liczba1-liczba2;
            break;

        case '*':
            result=liczba1*liczba2;
            break;

        case '/':
            result=(float)liczba1/(float)liczba2;
            break;

    }

    printf("Wynik rownania: %d %c %d = %f\n",liczba1,ch,liczba2,result);
    return 0;
}