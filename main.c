#include <stdio.h>

int main() {

    int x,y,wynik;
    char znak;

    printf("Podaj pierwsza liczbe: \n");
    scanf("%d",&x);

    printf("Podaj druga liczbe: \n");
    scanf("%d",&y);

    printf("Podaj dzialanie (+,-,*,/): \n");
    getchar();
    scanf("%c",&znak);

    switch(znak)
    {
        case '+':
            wynik=x+y;
            printf("Wynik dzialania to: \n%d",wynik);
            break;

        case '-':
            wynik=x-y;
            printf("Wynik dzialania to: \n%d",wynik);
            break;

        case '*':
            wynik=x*y;
            printf("Wynik dzialania to: \n%d",wynik);
            break;

        case '/':
            if(y==0)
                {
                  printf("Nie mozna dzielic przez 0");
                }
            else
                {
                wynik=x/y;
                printf("Wynik dzialania to: \n%d",wynik);
                }
            break;
    }
    return 0;
}
