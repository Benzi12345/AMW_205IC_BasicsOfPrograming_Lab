#include <stdio.h>>

int main(){

    int a, b;
    float wynik;
    char znak;

    printf("Wpisz dzialanie: ");
    scanf("%i", &a);
    scanf("%c", &znak);
    scanf("%i", &b);

    if(znak == '+'){
        wynik = a + b;
        printf("%f", wynik);
    }
    if(znak == '-'){
        wynik = a - b;
        printf("%f", wynik);
    }
    if(znak == '*'){
        wynik = a * b;
        printf("%f", wynik);
    }
    if(znak == '/'){
        wynik = a / b;
        printf("%f", wynik);
    }

}