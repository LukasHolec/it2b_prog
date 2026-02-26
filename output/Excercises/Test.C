#include<stdio.h>

int soucetDelitelu(int cislo) {

    int soucet = 0;
    for (int i = 1; i <= cislo; i++) {
        if (cislo % i == 0 && i % 2 == 1) {
            soucet = soucet + i;
            printf("Delitel je: %d\n", i);
        }
    }
    return soucet;
}

int lichoSpecialni(int cislo) {

    int s = soucetDelitelu(cislo);

    if (s > cislo) {
        printf("Cislo je licho-specialni");
        return 1;

    }
    else {
        printf("Cislo neni licho-specialni");

        return 0;
    }
}




int main() {

    int cislo;
    
    printf("Zadejte cislo:");
    scanf("%d", &cislo);

    printf("\nSoucet delitelu je: %d\n\n", soucetDelitelu(cislo));
    lichoSpecialni(cislo);

    return 0;
}

