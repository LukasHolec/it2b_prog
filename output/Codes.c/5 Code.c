/* 

STRINGY
-------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main () {

        char kopr[] = "kopr";

        int i = 0;
        while (kopr[i] != '\0') {
            printf("%c\n", kopr[i]);
            i++;
        }

        
        return 0;
    }
*/

#include <stdio.h>
#include <ctype.h>
    int main () {

        char ahoj[] = "AHOJ";
        char znak;

        printf("Zadejte libovolny znak:");
        scanf("%c", &znak);
        for (int i = 0; i < 4; i++) {

            znak = toupper (ahoj[i]);

            if (znak != ahoj[i]) {
                continue;
            }
            
            else if (znak == ahoj[i]) {
            printf("Znak %c je ve stringu %s", znak, ahoj);
            return 0;
            }
    }
        printf("Znak %c neni ve stringu %s", znak, ahoj);

        return 0;
}

