#include <stdio.h>

    int main() {
        printf("Wybierz dzialanie:\n1.dodawanie\n2.odejmowanie\n3.mnozenie\n4.dzielenie \n");
        int wybor;
        printf("Podaj pierwsza liczbe\n");
        int liczba1;
        printf("Podaj druga liczbe\n");
        int liczba2;


        scanf("%d %i %i", &wybor,&liczba1,&liczba2);



        if(wybor == 1) {
            printf("Wynik to: %i+%i=%d\n", liczba1,liczba2,(liczba1+liczba2));
        }
        else if(wybor ==2 ) {
            printf("Wynik to: %i-%i=%d\n", liczba1,liczba2,(liczba1-liczba2));
        }
        else if(wybor ==3 ) {
            printf("Wynik to: %i*%i=%d\n",  liczba1,liczba2,(liczba1*liczba2));
        }
        else if(wybor ==4 ) {
            printf("Wynik to: %i/%i=%d\n",liczba1,liczba2,(liczba1/liczba2));
        }

        return 0;
    }