#include <stdio.h>

int main() {

    float x,y, wynik;
    char znak;

    scanf("%f",&x);

    scanf(" %c",&znak);

    scanf("%f",&y);



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
    printf("%f",wynik);
    return 0;
}
