#include <stdio.h>
#include <math.h>

int main() {
    float l1;
    float l2;
    char znak;
    float wynik;

    do {
        printf("\nPodaj dzialanie\n");
        scanf("\n%f %c %f", &l1, &znak, &l2);
    }while (_isnanf(l1||l2));


    switch(znak){
        case '+': wynik = l1 + l2; break;
        case '-': wynik = l1 - l2; break;
        case '*': wynik = l1 * l2; break;
        case '/': wynik = l1 / l2; break;
    }

    printf("\nWynik Twojego dzialania: \n%g \n\n", wynik);

    return 0;
}
