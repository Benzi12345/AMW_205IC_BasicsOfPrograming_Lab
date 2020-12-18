#include <stdio.h>

int main() {
    int liczba1, liczba2;
    float wynik;
    char ch;

    printf("Wprowadz pierwsza liczbe: ");
    scanf("%i",&liczba1);
    printf("Wprpowadz druga liczbe: ");
    scanf("%i",&liczba2);

    printf("Wybierz operacje: + - * /");
    scanf(" %c", &ch);

    if(ch=='+'){
        wynik=liczba1+liczba2;
        printf("Wynik: %i + %i = %f",liczba1,liczba2,wynik);
    }
    else if(ch=='-'){
        wynik=liczba1-liczba2;
        printf("Wynik: %i - %i = %f",liczba1,liczba2,wynik);
    }
    else if(ch=='*'){
        wynik=liczba1*liczba2;
        printf("Wynik: %i * %i = %f",liczba1,liczba2,wynik);
    }
    else if(ch=='/' && liczba2 != 0){
        wynik=liczba1/liczba2;
        printf("Wynik: %i / %i = %f",liczba1,liczba2,wynik);
    }
    else {
        printf("Nie dziel przez 0");
    }
    return 0;
}
