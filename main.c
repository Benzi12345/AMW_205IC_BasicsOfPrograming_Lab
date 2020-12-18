#include <stdio.h>
int main()
{
    char choice;
    float number1, number2, wynik;
    char flag = 1;
    printf("Prosty kalkulator\n\n");
    printf("Pierwsza liczba   [+ - * /]  Druga liczba\n");

    scanf("%f %c %f", &number1, &choice, &number2);

    switch(choice)
    {
        case '+':
            wynik = number1 + number2;
            break;
        case '-':
            wynik = number1 - number2;
            break;
        case '*':
            wynik = number1 * number2;
            break;
        case '/':
            if (number2 ==0)
            {
                printf("Nie mozna dzielic przez 0");

            }
            else
            {
                '/';
                wynik = number1 / number2;
            }
            break;
        default:
            flag = 0;
            break;
    }

    if(flag)
    {
        printf("%.2f %c %.2f = %.2f\n\n", number1, choice, number2, wynik);
    }
    else
    {
        printf("Please Enter Valid Operator\n\n");
    }
    return 0;
}