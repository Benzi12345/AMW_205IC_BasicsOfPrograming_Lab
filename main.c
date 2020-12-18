#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a, b, w;
    char d;
    printf("Pierwsza liczba: \n");
    scanf("%d", &a);
    printf("Druga liczba: \n");
    scanf("%d", &b);
    getchar();
    printf("Operacja: \n");
    scanf("%c", &d);
    switch (d)
    {
        case '+':
            w=a+b;
            printf("Wynik: %d\n", w);
            break;
        case '-':
            w=a-b;
            printf("Wynik: %d\n", w);
            break;
        case '*':
            w=a*b;
            printf("Wynik: %d\n", w);
            break;
        case '/':
            if (b==0)
            {
                printf("Nie mozna dzielic przez zero!");
            }
            else
            {
                '/'; w=a/b;
                printf("Wynik: %d\n", w);
            }
            break;
    }
    return 0;
}