#include <stdio.h>

int main() {

    float x,y, wynik;
    char znak;

    printf("Podaj pierwsza liczbe: \n");
    scanf("%f",&x);

    printf("Podaj druga liczbe: \n");
    scanf("%f",&y);

    printf("Podaj dzialanie (+,-,*,/): \n");
    scanf(" %c",&znak);

    switch(znak)
    {
        case '+':
            wynik=x+y;
            break;

        case '-':
            wynik=x-y;
            break;

        case '*':
            wynik=x*y;
            break;

        case '/':
            if(y==0)
                {
                  printf("Nie mozna dzielic przez 0");
                  return 0;
                }
            else
                {
                wynik=x/y;
                }
            break;
    }
    printf("Wynik dzialania to: \n%f",wynik);
    return 0;
}
