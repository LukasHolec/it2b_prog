#include<stdio.h>

int soucet(int cislo) {
int sum = 0;
for (int i = 1; i <= cislo; i++) {
    if (cislo % i == 0) {
    printf("Delitel cisla %d je %d\n", cislo, i);
    sum = sum + i; 
    }
}
    return sum;    
}

int dokonale(int cislo) {
    
}

int main() {
    int num; 

    printf("Zadejte cislo: \n");
    scanf("%d", &num);

    printf("%d", soucet(num));





return 0;
}

-----------------------------------------




#include<stdio.h>

void obdelnik(char znak, int sirka, int vyska){
if ( vyska < 2 || sirka < 2) {
    printf("CHYBA");
}
}
if (vyska == 3 & sirka == 2) {
    for (int h = 1; h <= vyska; h++) {
        printf("%c %c", znak, znak);
        printf("\n");
    }
}


int main() {
    obdelnik('#', 1, 1);

    return 0;
}