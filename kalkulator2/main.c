#include <stdio.h>>
int main(){

    float a, b, suma,roznica,iloraz,iloczyn;
    char oblicz;

    printf("Wpisz dzialanie: ");
    scanf("%f",&a);
    scanf("%c",&oblicz);
    scanf("%f",&b);

    if(oblicz == '+'){
        suma = a + b;
        printf("%f", suma);
    }
    if(oblicz == '-'){
        roznica = a - b;
        printf("%f", roznica);
    }
    if(oblicz == '*'){
        iloczyn = a * b;
        printf("%f", iloczyn);
    }
    if(oblicz == '/'){
        iloraz = a / b;
        printf("%f", iloraz);
    }

}