#include <stdio.h>

int main() {

    double liczba1,liczba2,dodawanie,odejmowanie,mnozenie;
    float dzielenie;
    char operator;

    printf("Prosze podaj pierwsza liczbe. :");
    scanf(" %d",&liczba1);
    printf("Prosze podaj druga liczbe. :");
    scanf(" %d",&liczba2);
    printf(" Podaj znak opercji : ");
    scanf(" %c",&operator);

    if(operator== '+' ){
        dodawanie=liczba1+liczba2;
        printf("Wynik dodawania %d + %d wynosi: %d",liczba1,liczba2,dodawanie);
    }
    else if(operator== '-' ){
        odejmowanie=liczba1-liczba2;
        printf("Wynik odejmowania %d - %d wynosi: %d",liczba1,liczba2,odejmowanie);
    }
    else if(operator== '*' ){
        mnozenie= liczba1 * liczba2;
        printf( "Wynik mnozenia  %d * %d wynosi: %d",liczba1,liczba2,mnozenie);
    }
    else if(operator=='/' && liczba2 != 0) {
        dzielenie = liczba1 / liczba2;
        printf("Wynik: %d / %d = %f", liczba1, liczba2, dzielenie);
    }
    else{
        printf("Nie wpisales prawidlowego znaku lub podzieliles przez 0.");
    }
    return 0;
}