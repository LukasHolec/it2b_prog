#include<stdio.h>
    int main() {
    // Cas odletu
        float hodiny = 0;
        int minuty = 0;
    // Rychlost a cas     
        float vzdalenost = 0;
        float rychlost = 0;
        
            printf("Jaky je cas odletu v hodinach? [H]");
            scanf("%f", &hodiny);

                if (hodiny > 25 || hodiny < 1) {
                    printf("Spatny vstup)ů
                    return 1;
                }
              

            printf("A v minutach? [M]");
            scanf("%d", &minuty);

                if (minuty > 60 || minuty < 1) {
                    printf("Spatny vstup");
                    return 1;
                }
             

            printf("Jaka je letova vzdalenost? [KM]");
            scanf("%f", &vzdalenost);
                
                if (vzdalenost < 1) {
                    printf("Spatny vstup");
                    return 1;
                }
              

            printf("Jaka je rychlost letadla? [KM/H]");
            scanf("%f", &rychlost);
               
                if (rychlost < 1) {
                    printf("Spatny vstup");
                    return 1;
                }

        float t = vzdalenost / rychlost;

        printf("Cas priletu je: %f, %.1f", hodiny + t);

             

        return 0;
    }




