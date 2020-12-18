#include <stdio.h>

int main()
{
    //VARS
    float a,b;
    float result;
    char op;

    //DISPLAY
    printf("Wprowadz liczbe nr 1: ");
    scanf("%f",&a);
    printf("Wprowadz liczbe nr 2: ");
    scanf("%f",&b);

    printf("\nWprowadz operator dzialania (+,-,*,/): ");
    scanf(" %c",&op);

    //SWITCH & CALCULATE
    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if(b == 0)
                printf("B!\n Dzielenie przez 0!");
                result = 0;
            else if(b > 0)
                result=a/b;
            break;
        default:
            printf("B!\nWybrano nieodpowiednia operacje (+,-,*,%)!");
    }

    printf("Rownanie: %f %c %f = %f\n",a,op,b,result);
    return 0;
}