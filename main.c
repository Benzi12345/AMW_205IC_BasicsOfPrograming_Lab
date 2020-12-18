#include <stdio.h>

int main() {
    char zn;
    float l1;
    float l2;

    printf("Podaj znak (+, -, *, /):\n");
    scanf("%c", &zn);

    printf("Podaj dwie liczby:\n");
    scanf("%f %f", &l1, &l2);

    if(op=='+'){
        printf("Wynik dodawania %f + %f = %f to", l1, l2, l1+l2);
    }else if(op=='-'){
        printf("Wynik odejmowania %f - %f = %f to", l1, l2, l1-l2);
    }else if(op=='*'){
        printf("Wynik mnożenia %f * %f = %f to", l1, l2, l1 * l2);
    }else if(op=='/'){
        printf("Wynik dzielenia %f / %f = %f to", l1, l2, l1/l2);
    }else {
        printf("podałeś złe dane");
    }
    return 0;
}
