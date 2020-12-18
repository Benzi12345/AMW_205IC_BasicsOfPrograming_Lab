#include <stdio.h>

int main() {
    int l1,l2;
    float wynik, wybor;

    printf("Podaj liczby: \n");
    scanf("%i\n%i", &l1,&l2);
    printf("Wybierz dzialanie 1.Dodawanie, 2.Odejmowanie, 3.Dzielenie, 4.Mnozenie: ");
    scanf("%f", &wybor);
    if(wybor == 1)
    {
        wynik=l1+l2;
    }
    else if(wybor == 2)
    {
        wynik=l1-l2;
    }
    else if(wybor == 3 &&  l2 == 0)
    {
        printf("Nie wolno dzielic przez zero");
    }
   else if(wybor == 3)
    {
        wynik=l1/l2;
    }
    else if(wybor == 4)
    {
        wynik=l1*l2;
    }
    else if(wybor > 4)
    {
        printf("Wprowadzono zla liczbe");
    }
    printf("Wynik obliczen: %f",wynik);
    return 0;
}
