#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char d[100];
    int x=0;
    printf("Podaj dzialanie, znaki rozdzielaj spacjami\n");
    gets(d);
    int len=strlen(d);
    float wynik=d[0]-48;
    float l2=0;
    for(int i=2; i<len; i++) {
        if (i % 2 == 0)
            if (isdigit(d[i]) == 0)
                x = i;
            else {
                l2 = d[i]-48;
                switch (d[x]) {
                    case '+':
                        wynik = wynik + l2;
                        break;
                    case '-':
                        wynik = wynik - l2;
                        break;
                    case '*':
                        wynik = wynik * l2;
                        break;
                    case '/':
                        if (l2 != 0)
                            wynik = wynik / l2;
                        else {
                            printf("Nie dziel przez zero");
                            return 0;
                        }
                        break;
                    default:
                        printf("Zly znak");
                        return 0;
                }

            }


    }
    printf(" %f", wynik);
}
