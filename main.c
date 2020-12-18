#include <stdio.h>

int main() {
   //Zmienne
   float liczba1, liczba2, wynik, dodawanie, odejmowanie, mnozenie, dzielenie;
   char operacja;


   //Wpisywanie danych przez użytkownika
   printf("Wprowadz dzialanie: ");
   scanf("%f",&liczba1);
   scanf("%c",&operacja);
   scanf("%f",&liczba2);

   //Obliczenia
   if (operacja == '+'){
       dodawanie = liczba1 + liczba2;
       printf("%f", dodawanie);

   } else if (operacja == '-'){
       odejmowanie = liczba1 - liczba2;

        printf("%f", odejmowanie);
   } else if (operacja == '*'){
       mnozenie = liczba1 * liczba2;
        printf("%f", mnozenie);

   } else if (operacja == '/'){
       dzielenie = liczba1 / liczba2;
        printf("%f", dzielenie);

   } else if ("%c"=='/'&&liczba2 !=0){
       wynik=liczba1/liczba2;
       printf("Wynik: %i/%i=%f", liczba1,liczba2,wynik);

   } else {
       printf("Nie dziel przez 0");
   }
//Nie mogę dodać tego "else" tutaj, wyświetla błąd i nie wiem co jest źle zrobione
//
// else {
//       printf("Błędny znak, prosze podac poprawny");
//   }





       return 0;
}
