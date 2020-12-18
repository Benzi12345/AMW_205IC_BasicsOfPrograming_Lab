#include <stdio.h>

int main() {

    //Moje zmienne
    double numer1;
    double numer2;
    char Operacje;

    //Pierwsza liczba
    printf("Prosze o podanie pierwszej liczby: ");
    scanf("%lf", &numer1 );

    //Wybór znaku
    printf("Do wyboru jest +, -, *, /");
    printf(" Podaj operacje ktora chcesz wykonac: ");
    scanf(" %c", &Operacje );

//Druga liczba
    printf("Prosze podac druga liczbe:");
    scanf("%lf", &numer2);

//Część matematyczna
    if(Operacje == '+') {
        printf("%f", numer1 + numer2);
    } else if ( Operacje == '-'){
        printf("%f", numer1 - numer2);
    } else if ( Operacje == '*'){
        printf("%f", numer1 * numer2);
    } else if ( Operacje == '/'){
        printf("%f", numer1 / numer2);
    } else {
        printf("Nieodpowiedni znak, prosze wpisac poprawny (+,-,*,/)");
    }
    return 0;
}

