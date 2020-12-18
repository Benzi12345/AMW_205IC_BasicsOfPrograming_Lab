#include <stdio.h>

int main() {
    char zn;
    int l1, l2, wynik=0;
    double wynikdzielenia=0;

    printf("Podaj swoje działanie\n");
    scanf("%i%c%i", &l1, &zn, &l2);

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
            wynikdzielenia=(double)l1/(double)l2;
            printf("Wynik %i %c %i = %lf", l1, zn, l2, wynikdzielenia);
            return 0;
        }
    }else {
        printf("coś poszło nie tak\n try again");
    }
    printf("Wynik %i %c %i = %i", l1, zn, l2, wynik);
    return 0;
}