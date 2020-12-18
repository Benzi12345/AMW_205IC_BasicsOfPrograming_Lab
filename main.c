#include <stdio.h>

int main()
{
    int num1,num2;
    float result;
    char ch;

    printf("Wpisz pierwsza liczbe: ");
    scanf("%d",&num1);
    printf("Wpisz druga liczbe: ");
    scanf("%d",&num2);

    printf("Wybierz operacje (+,-,*,/): ");
    scanf(" %c",&ch);

    result=0;
    switch(ch)
    {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=(float)num1/(float)num2;
            {
                if(result==0)
                    printf("Nie można dzielić przez 0");
            }
            break;
    }

    printf("Wynik: %d %c %d = %f\n",num1,ch,num2,result);
    return 0;
}