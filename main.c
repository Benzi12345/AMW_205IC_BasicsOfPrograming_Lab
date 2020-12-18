#include <stdio.h>

int main() {
    char zn;
    int l1, l2, wynik=0;

    printf("Podaj znak (+, -, *, /) oraz dwie liczby:\n");
    scanf("%c%i%i", &zn, &l1, &l2);

    if(zn=='+'){
        wynik=l1+l2;
    }else if(zn=='-'){
        wynik=l1-l2;
    }else if(zn=='*'){
        wynik=l1*l2;
    }else if(zn=='/'){
        if(l2==0){
            printf("nie po prostu nie...");
            return 0;
        }else {
            wynik=l1/l2;
        }
    }else {
        printf("coś poszło nie tak\n try again");
    }
    printf("Wynik %i %c %i = %i", l1, zn, l2, wynik);

    return 0;
}
