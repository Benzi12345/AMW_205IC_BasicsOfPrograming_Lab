#include <stdio.h>>
int main()
{
    int liczba1, liczba2;
    float wynik;
    char ch;

    printf("Wpisz rownanie matematyczne: ");
    scanf("%d", &liczba1);
    scanf("%c", &ch);
    scanf("%d", &liczba2);

    wynik = 0;
    switch (ch)
    {
        case '+':
            wynik = liczba1 + liczba2;
            break;

        case '-':
            wynik = liczba1 - liczba2;
            break;

        case '*':
            wynik = liczba1 * liczba2;
            break;

        case '/':
            wynik = (float) liczba1 / (float) liczba2;
            break;
    }


    printf("Wynik rownania: %d %c %d = %f\n", liczba1, ch, liczba2, wynik);
    return 0;
}