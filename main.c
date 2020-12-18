#include <stdio.h>

int main() {

    int x,y,wynik;
    char znak;

    scanf("%d",&x);

    getchar();
    scanf("%c",&znak);

    scanf("%d",&y);



    switch(znak)
    {
        case '+':
            wynik=x+y;
            printf("%d",wynik);
            break;

        case '-':
            wynik=x-y;
            printf("%d",wynik);
            break;

        case '*':
            wynik=x*y;
            printf("%d",wynik);
            break;

        case '/':
            if(y==0)
                {
                  printf("Nie mozna dzielic przez 0");
                }
            else
                {
                wynik=x/y;
                printf("\n%d",wynik);
                }
            break;
    }
    return 0;
}
