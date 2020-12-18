#include <stdio.h>

int main() {
    float liczba1, liczba2;
    float wynik;
    char ch;

    printf("Wpisz dzialanie: ");
    scanf("%f",&liczba1);
    scanf("%c",&ch);
    scanf("%f",&liczba2);

    if(ch == '+'){
        wynik = liczba1 + liczba2;
        printf("%f", wynik);
    }
    if(ch == '-'){
        wynik = liczba1 - liczba2;
        printf("%f", wynik);
    }
    if(ch == '*'){
        wynik = liczba1 * liczba2;
        printf("%f", wynik);
    }
    if(ch=='/' && liczba2 != 0){
        wynik = liczba1 / liczba2;
        printf("%f", wynik);
    }
    else {
        printf("Nie dziel przez 0");
    }
}