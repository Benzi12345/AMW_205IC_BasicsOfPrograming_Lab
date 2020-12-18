#include <stdio.h>

int main()
{
    int a,b,suma,roznica,iloczyn,iloraz;
    char operacja;
    printf("podaj liczbe A: ");
    scanf("%i",&a);
    printf("podaj liczbe B: ");
    scanf("%i",&b);
    printf("podaj operacje +,-,*,/\n");
    scanf(" %c",&operacja);

    if(operacja == '+') {
        suma = a + b;
        printf("%i", suma);
    }
    else if(operacja == '-')
    {
        roznica=a-b;
        printf("%i",roznica );
    }
    else if(operacja == '*')
    {
        iloczyn=a*b;
        printf("%i",iloczyn );
    }
    else if(operacja == '/')
    {
        iloraz=a/b;
        printf("%i",iloraz );
    }

}
