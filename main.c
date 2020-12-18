#include <stdio.h>

    int main() {

        int a,c;
        int dzielenieprzezzero=0;
        char b;
        float wynik;
                printf("Wprowadz dzialanie\n");
        scanf("%d%c%d",&a,&b,&c);
        switch(b)
        {
            case '+':
                wynik=a+c;
                printf("Wynik dzialania to %d\n", (int)wynik);
                break;
            case '-':
                wynik=a-c;
                printf("Wynik dzialania to %d\n", (int)wynik);
                break;
            case '*':
                wynik=a*c;
                printf("Wynik dzialania to %d\n", (int)wynik);
                break;
            case '/':
                if (c==0)
                    {
                    printf("Nie dzieli sie przez 0");
                    dzielenieprzezzero=1;
                    break;
                    }
                else
                    wynik=a/(float)c;
                    printf("Wynik dzialania to %.2f\n", wynik);
                break;


        }

        return 0;
    }