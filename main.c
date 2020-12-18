#include <stdio.h>>
int main(){

    float a, b, suma,roznica,iloraz,iloczyn;
    char licz;

    printf("Wpisz dzialanie: ");
    scanf("%f",&a);
    scanf("%c",&licz);
    scanf("%f",&b);

    if(licz == '+'){
        suma = a + b;
        printf("%f", suma);
    }
    if(licz == '-'){
        roznica = a - b;
        printf("%f", roznica);
    }
    if(licz == '*'){
        iloczyn = a * b;
        printf("%f", iloczyn);
    }
    if(licz == '/'){
        iloraz = a / b;
        printf("%f", iloraz);
    }
}