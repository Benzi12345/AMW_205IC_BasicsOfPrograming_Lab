#include <stdio.h>
int main() {

    float liczba1, liczba2, dodawanie, odejmowanie, mnozenie, dzielenie;
    char oblicz;
    printf("Wpisz dzialanie:");
    scanf("%f", &liczba1);
    scanf("%c", &oblicz);
    scanf("%f", &liczba2);
    if(oblicz =='+')
    {
        dodawanie = liczba1 + liczba2;
        printf("%f", dodawanie);
    }
    if(oblicz =='-')
    {
        odejmowanie = liczba1 - liczba2;
        printf("%f", odejmowanie);
    }
    if(oblicz =='*')
    {
        mnozenie = liczba1 * liczba2;
        printf("%f", mnozenie);
    }
    if(oblicz =='/')
    {
        dzielenie = liczba1 / liczba2;
        printf("%f", dzielenie);
    }

}