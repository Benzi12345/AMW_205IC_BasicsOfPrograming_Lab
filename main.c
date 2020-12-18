#include <stdio.h>

int main() {
    int a,b ;
    float score;
    char sign;
    printf("Podaj rowanie: ");
    scanf("%d%c%d",&a,&sign,&b);

    switch (sign) {
        case '+':
           score = a+b;
            printf("Wynik dodawania to: %f",score);
            break;
        case '-':
            score = a-b;
            printf("Wynik odejnowania to: %f",score);
            break;
        case '*':
            score = a*b;
            printf("Wynik mnozenia to: %f",score);
            break;
        case '/':
            if (b==0)
            {
                printf("Error! Nie mozna dzielic przez 0");
            }
            else{
                score = (float)a/(float)b;
                printf("Wynik dzielenia to: %f",score);
            }
            break;
        default:
            printf("Error! zly znak");
    }
    return 0;
}
