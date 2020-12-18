#include <stdio.h>

int main()
{
    int num1,num2;
    float result;
    char ch;

    printf("Wprowadz pierwsza liczbe: ");
    scanf("%d",&num1);
    printf("Wprowadz druga liczbe: ");
    scanf("%d",&num2);

    printf("Jakie dzialanie chcesz wykonac?: (+,-,*,/): ");
    scanf(" %c",&ch);

    result=0;
    switch(ch) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if(num2 == 0)
                printf("Blad! Nie dziele przez 0");
            else if(num2 > 0)
            result=(float)num1/(float)num2;
                break;


        default:
            printf("Nieprawidlowa operacja.\n");
    }

    printf("Wynik: %d %c %d = %f\n",num1,ch,num2,result);
    return 0;
}
