#include <stdio.h>>

int main(){

    int a, b;
    float wynik;
    char znak;

    printf("Wpisz pierwsza liczbe: ");
    scanf("%i", &a);
    printf("Wpisz druga liczbe: ");
    scanf("%i", &b);
    printf("Podaj znak operacji: ");
    scanf(" %c", &znak);

    if(znak == '+'){
        wynik = a + b;
        printf("Wynik dzialania to: %f", wynik);
    }
    if(znak == '-'){
        wynik = a - b;
        printf("Wynik dzialania to: %f", wynik);
    }
    if(znak == '*'){
        wynik = a * b;
        printf("Wynik dzialania to: %f", wynik);
    }
    if(znak == '/'){
        wynik = a / b;
        printf("Wynik dzialania to: %f", wynik);
    }

}