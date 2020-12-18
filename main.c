#include<stdio.h>

int main(void)
{
    int a, b, wynik;
    char opr;

    printf("Wprowadz rownanie: ");
    scanf("%i%c%i", &a, &opr, &b);

    switch(opr)
    {
        case '+':
            wynik = a + b;
            break;
        case '-':
            wynik = a - b;
            break;
        case '*':
            wynik = a * b;
            break;
        case '/':if(b != 0)
            wynik = a / b;
        else
            printf("Nie dzielimy przez zero\n");
            break;
    }
    printf("Wynik = %i", wynik);

    return 0;
}