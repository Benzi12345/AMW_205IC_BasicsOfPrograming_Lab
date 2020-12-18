#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main ()
{
    int  a, b, j;
    j=1;
    char c;
    printf("Pobieram pierwsza liczbe : \n");
    scanf("%d", &a);
     while(j==1)
    {
    getchar();
    printf("Jaka operacje chcesz wykonac (podaj znak): \n");
    scanf("%c", &c);
    switch (c)   /// działanie
    {
        case '+':
            printf("Wpisz liczbe: \n");
            scanf("%d", &b);
            a = a + b;
            printf("Wynik to: %d\n", a);
            break;
        case '-':
            printf("Wpisz liczbe: \n");
            scanf("%d", &b);
            a = a - b;
            printf("Wynik to: %d\n", a);
            break;
        case '*':
            printf("Wpisz liczbe: \n");
            scanf("%d", &b);
            a = a * b;
            printf("Wynik to: %d\n", a);
            break;
        case '/':
            printf("Wpisz liczbe: \n");
            scanf("%d", &b);
            while (b == 0) {
                printf("Nie mozna dzielic przez zero podaj inną liczbe");
                scanf("%d", &b);
            }
            '/';
            a = a / b;
            printf("Wynik to: %d\n", a);
            break;
        case'=':
            printf("Wynik to: %d\n", a);
            j--;
            break;
    }
    }
    return 0;
}