#include <stdio.h>

int main() {
    int liczba1, liczba2; /*    liczby do działania     */
    char znak; /*   znak odpowiadający działaniu  + - * /         */
    int wynik;


    printf("Podstawowa wersja kalkulatora obslugujaca + - * / na dwoch liczbach calkowitych:\n");

    printf("Wprowadz dzialanie np '2 + 2'\n");
    scanf("%i %c %i", &liczba1, &znak, &liczba2);

   /* printf("Teraz należy wybrac operacje: \n");*/
    printf("Odczytane dzialanie: %i %c %i \n", liczba1, znak, liczba2);


    switch(znak)
    {
        case '+':
            wynik = liczba1+liczba1;
            break;

        case '-':
            wynik = liczba1-liczba2;
            break;
        case '*':
            wynik = liczba1*liczba2;
            break;
        case '/':
            if(liczba2 == 0)
            {
                printf("Nie dzielic przez 0");
                return 0;
            }
            wynik = liczba1/liczba2;
            break;

        default:
            printf("Zły znak!");  /*brak zabezpieczen odnosnie liczb zmiennoprzecinkowych, moze pozniej*/
            return 0;

    };
    printf("Wynik dzialania to: %i\n", wynik);




    return 0;
}
