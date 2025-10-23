/*#include <stdio.h>

int main () {

    int cislo = 0;

        printf("Zadejte sude cislo\n");
        scanf("%d", &cislo);

    for (int i = 1; i <= cislo; i ++) {
          if (cislo % i == 0){
        printf ("%d ", i);
        }
            else {
                continue;
            }
    }


    return 0;
}
    */
#include <stdio.h>  
int main() {
    int cislo = 0;

    do {
        printf("Zadejte libovolne trimistne usde cislo:");
        scanf("%d", &cislo);    
        }

    while (cislo < 100 && cislo > 999 && cislo / 2 == 1) {
             do {printf("Zadejte libovolne trimistne usde cislo:");
                scanf("%d", &cislo); 
        }
        else {
            printf("Zadejte libovolne trimistne usde cislo:");
        scanf("%d", &cislo); 
        }


    return 0;
}
}