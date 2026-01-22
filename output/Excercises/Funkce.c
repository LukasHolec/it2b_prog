/* #include<stdio.h>
    int main() {

        int arr[4];
        int soucet = 0;

        for (int i = 0; i < 3; i++) {
            printf("Zadejte pocet pisnicek ve %d playlistu\n", i+1);
            scanf("%d", &arr[i]);
        }
        
        
            

        return 0;
    }   
       
       
#include<stdio.h>
#include<time.h>

char *get_time_str(void)
{
    static char buffer[100];
    time_t t;

    t = time(NULL);
    strftime(buffer, 20, "%d.%m.%Y %H:%M:%S", localtime(&t));
    return buffer;
}

int my_print (char *text, int count)
{
    printf("\n");
    for (int i = 0; i < count; i++) {
        printf("%s   %s\n", text, get_time_str());
        sleep(2);
    }
    printf("\n");
    return count + 2;
}

int main()
{
    int row_cnt = my_print("Zdarec kamo", 4);
    printf("pocet radku, ve vypisu byl %d\n", row_cnt);
    return 0;
}
 
#include<stdio.h>


int umocni3(int x) {
    return x*x*x;
}
int main() {

printf("%d\n", umocni3(9));
printf("%d\n", umocni3(7));

    return 0;
    }

#include<stdio.h>

int obvod(int x){
    return x*x;
}
int main() {
    int cislo;
    printf("Zadejte cislo:");
    scanf("%d", &cislo);
    printf("obvod ctverce je: %d", obvod(cislo));

    return ;
}


#include<stdio.h>

int max (int a, int b) {

    int maxim;

    if (a > b) {
        return a;
    }
    else {
        return b;
    }

}
int main() {
    printf("%d", max(5,8));
    


    return 0;
}
    
    #include<stdio.h>
    #include<math.h>

   
   int phytagoras (int a, int b) {
    return ((a*a)+(b*b));
   }
   int main() {
    printf("C^2=%d",phytagoras(6,7));

    return 0;
   }
    


    #include<stdio.h>

        float objemValce (float vyska, float polomer) {
            float pi = 3.14;
            return vyska*polomer*polomer*pi;
        }
    int main() {
        printf("Polomer je: %f", objemValce(5,2));
        return 0;
    }

#define PI 3.14

#include<stdio.h>

float objemValce1 (float vyska1, float polomer1) {
    return vyska1*polomer1*polomer1*PI;
}

float objemValce2 (float vyska2, float polomer2) {
    return vyska2*polomer2*polomer2*PI;
}

float objemValce3 (float vyska3, float polomer3) {
    return vyska3*polomer3*polomer3*PI;
}

float vysledek (void) {
    return objemValce1(1,2) + objemValce2(2,3) + objemValce3(3,4);
}

int main()
{
    printf("Polomer je: %f\n", vysledek());
    return 0;
} 



#include<stdio.h>

    int objem (int x, int y, int z, int a, int b) {
        return (x*y*z)*a/b;
    }

    int plocha (int x, int y, int z, int a, int b) {
        return (2*z*x+2*z*y+x*y)*a/b;
    }

int main() {
    printf("objem je: %d litru\n", objem(20,10,5,4,5));
    printf("plocha je: %d litru\n", plocha(20,10,5,4,5));

    return 0;
}

#include<stdio.h>

void opakuj(char text[], int pocet){
    for (int i = 0; i < pocet; i++) {
        printf("%s", text);
        printf("\n");
    }
}

int main() {

    opakuj("ahoj", 5);
    return 0;
}
   

#include<stdio.h>

void tiskRadek(char znak, int delka){
    for (int i = 0; i < delka; i++) {
        printf("%c", znak);
    }
    printf("\n");
}

int main() {

    tiskRadek ('#', 7);

    return 0;
}

#include<stdio.h>

int faktorial(int n) {
    int soucet = n;
    for (int i = n-1; i > 0; i--) {
        soucet *= i;
    }
    return soucet;
}

int main() {

    printf("%d", faktorial(5));
    return 0;
}

#include<stdio.h>

void tiskPyramida (char znak, int vyska) {

    for (int i = vyska; i > 0; i--) {
        for (int i = 1; i <= vyska; i++) {
            printf("%c", znak);
        }
        printf("\n");
    }
}

int main () {

    tiskPyramida('#', 3);

    return 0;
}


#include<stdio.h>

int umocni3(int x) {
    return x*x*x;
}

int main() {

    printf("%d", umocni3(5));
    return 0;
}
   

#include<stdio.h>

void delka(int x) {

    printf("%d", x*x);

}

int main() {

    int strana;
    printf("Zadejte delku strany ctverce: ");
    scanf("%d", &strana);

    delka(strana);

    return 0;
}
     
#include<stdio.h>

int max(int x, int y) {

if (x > y) {
    return x;
}
else {
    return y;
}

}

int main() {

printf("%d", max(5,6));

return 0;
}

#include<stdio.h>

int phytagoras(int a, int b) {

return a*a + b*b;

}

int main() {

printf("%d", phytagoras(3,4));

return 0;
}   

#include<stdio.h>

#define PI 3.14

float objemValce(int polomer, int vyska) {

    return PI * polomer*polomer * vyska;
    
}

int main() {

    printf("%f", objemValce(3,4));

    return 0;
}

#include<stdio.h> 

#define PI 3.14

float objemValce1(int a1, int a2) {
    return PI * a1*a1 * a2;
}


int main() {

float V1 = objemValce1(3,4);
float V2 = objemValce1(4,5);
float V3 = objemValce1(5,6);

printf("Objem je: %f\n", V1);
printf("Objem je: %f\n", V2);
printf("Objem je: %f\n", V3);

printf("Celkovy objem je: %f", V1 + V2 + V3);
    return 0;
}

#include<stdio.h>

#define full (4.0/5.0)

int objem(int vyska, int sirka, int hloubka) {

    return vyska*sirka*hloubka*full;
    
}

int plocha(int vyska, int sirka, int hloubka) {

    return vyska*sirka + 2*(sirka*hloubka*full) + 2*(vyska*hloubka*full);
}

int main() {

    printf("%d\n", objem(4,5,1));
    printf("%d\n", plocha(4,5,1));


    return 0;
}


#include<stdio.h>

void pozdrav(char jmeno[]) {

    printf("Ahoj %s", jmeno);
    
}

int main() {

    pozdrav("Marek");

    return 0;
}

#include<stdio.h>

int papousek(char text[]) {

    printf("%s", text);
    
}

#include<stdio.h>

void opakovani(int pocet, char text[]) {

    for (int i = 0; i < pocet; i++) {
        printf("%s\n", text);
    }
}

int main() {

    int count;
    printf("Zadejte pocet opakovani:");
    scanf("%d", &count);

    opakovani(count, "Bober");

    return 0;
} 

#include<stdio.h>

void tiskRadek(char znak, int pocet) {

for (int i = 0; i < pocet; i++) {
        printf("%c", znak);
}

}

int main() {

tiskRadek('#', 5);

return 0;
}

#include <stdio.h>

int main() {
    int radky = 8;

    for (int i = 1; i <= radky; i++) { // Prochází řádky
        for (int j = 1; j <= i; j++) { // Tiskne 'i' hvězdiček na řádek
            printf("*");
        }
        printf("\n"); // Po každém řádku skočí na nový
    }
    return 0;
}


#include <stdio.h>

int main() {
    int n = 5; // Výška pyramidy

    for (int i = 1; i <= n; i++) {
        // 1. Vytiskni mezery (v každém řádku jich ubývá)
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 2. Vytiskni hvězdičky (v každém řádku jsou to liché počty: 1, 3, 5...)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


#include<stdio.h>

void Pyramida(char znak, int vyska) {

for (int i = 1; i <= vyska; i++) {
    for (int j = 1; j <= i; j++) {
        printf("%c", znak);
    }
        printf("\n");
}
    
}

int main() {

    Pyramida('#', 5);

    return 0;
}

#include<stdio.h>

void Pyramida(char znak, int vyska) {

for (int i = 1; i <= vyska; i++) {
    for (int j = vyska; j > i; j--) {
        printf(" ");
    }
    for (int z = 0; z < i; z++) {
        printf("%c ", znak);
    }
    printf("\n");
}

    
}

int main() {

    int bober;
    printf("Zadejte vysku pyramidy: ");
    scanf("%d", &bober);
    Pyramida('#', bober);

    return 0;
}

#include<stdio.h>

void jeCisloVPoli(int pole[], int delka, int cislo) {
int nalezeno = 0;

for (int i = 0; i < delka; i++) {
if (cislo == pole[i]) {
    nalezeno += 1;
    break;
}
}
if (nalezeno == 1) {
    printf("gg alkane");
}
else {
printf("Smrdis jak Petr");
}
}

int main() {
    int pole[5] = {1, 2, 3, 4, 5};
    jeCisloVPoli(pole, 6, 5);

    return 0;
}

#include<stdio.h>

int stejneStringy(char str1[30], char str2[30], int delka) {
    for (int i = 0; i < delka; i++) {
            if (str1[i] != str2[i]) {
                continue;
            }
            else {
                printf("Nejsou stejne");
                return 1;
            }
    }

    printf("Jsou stejne");
    return 0;
}

int main() {
    char str1[30];
    char str2[30];
    int delka;

    printf("Zadejte prosim dve slova:\n");
    scanf("%s", str1);
    scanf("%s", str2);
    printf("Zadejte delku techto slov:");
    scanf("%d", &delka);

    stejneStringy(str1, str2, delka);

    return 0;
} 

#include<stdio.h>

int validacePinu(int pin) {
if (pin % 4 == 0) {
    if (pin > 999 && pin < 10000) {
        printf("PIN byl spravny");
        return 0;

    }
        printf("Spatne");
        return 1;
}

else {printf("Spatny pin");
    return 1;
}
}

int main() {
int pin;

printf("Zadejte pin, ktery je ctyrmistny a delitelny ctyrma:");
scanf("%d", &pin);

validacePinu(pin);

return 0;
} 

#include<stdio.h>

int validujDatumNarozeni(int rok, int mesic, int den) {

    if (rok < 1900 || mesic > 12 || den > 31) {
        printf("Toto datum neni validni");
        return 1;
    }
    else {
        printf("Toto datum je validni");
        return 0;
    }
    
}

int main() {

    int rok;
    int mesic;
    int den;

    printf("Zadejte vas rok narozeni: \n");
    scanf("%d", &rok);

    printf("Zadejte vas mesic narozeni: \n");
    scanf("%d", &mesic);

    printf("Zadejte vas den narozeni: \n");
    scanf("%d", &den);

    validujDatumNarozeni(rok, mesic, den);

    return 0;
}
 


#include<stdio.h>

int vykresOhnostroje(char a, char b, int pocet) {

    for (int i = 0; i < pocet; i++) {
        printf("  %c  \n", a);
        printf("%c %c %c\n", a, b, a); 
        printf("  %c  \n\n", a);
    }
    return 0;
}

int main() {

    char a; 
    char b; 
    int pocet;

    printf("Zadejte znak:");
    scanf(" %c", &a);
    printf("Zadejte druhy znak:");
    scanf(" %c", &b);
    printf("Zadejte pocet ohnostroju: ");
    scanf("%d", &pocet);

    vykresOhnostroje(a, b, pocet);


    return 0;
} 

#include<stdio.h>

void vykresliObdelnik(int sirka, int vyska, char znak) {

    if (sirka == 45 && vyska == 4) {
        printf("%c%c%c%c%c\n", znak, znak, znak, znak, znak);
        printf("%c   %c\n", znak, znak); 
        printf("%c   %c\n", znak, znak);
        printf("%c   %c\n", znak, znak);
        printf("%c%c%c%c%c\n", znak, znak, znak, znak, znak);
    }

    if (sirka == 2 && vyska == 3) {
        printf("%c%c\n", znak, znak);
        printf("%c%c\n", znak, znak);
        printf("%c%c\n", znak, znak);
    }
    else {
        printf("CHYBA");
    }
}

int main() {

    int sirka;
    int vyska;
    char znak;

    printf("Zadejte sirku obdelniku: ");
    scanf("%d", &sirka);
    printf("Zadejte vysku obdelniku: ");
    scanf("%d", &vyska);
    printf("Zadejte znak: ");
    scanf(" %c", &znak);

    vykresliObdelnik(vyska, sirka, znak);

    return 0;
} 

#include<stdio.h>

void vykresliObdelnik(int sirka, int vyska, char znak) {
    if (vyska > 2 && sirka > 2) {
        
          //Vrchni rada
    for (int i = 0; i < sirka; i++) {
        printf("%c", znak);
    }
    printf("\n");
    //Prostredni rada s mezery
    for (int j = 0; j < vyska - 2; j++) { 
            printf("%c", znak); //Krajni znak
        for (int h = 0; h < sirka - 2; h++) {
            printf(" ");
        }
            printf("%c\n", znak); //Krajni znak
    }
    //Spodni rada
    for (int x = 0; x < sirka; x++) {
        printf("%c", znak);
    }
}
    else {
        printf("CHYBA");
    }


}

int main() {

    int sirka;
    int vyska;
    char znak;

    printf("Zadejte vysku obdelniku: ");
    scanf("%d", &vyska);
    printf("Zadejte sirku obdelniku: ");
    scanf("%d", &sirka);
    printf("Zadejte znak: ");
    scanf(" %c", &znak);

    vykresliObdelnik(vyska, sirka, znak);

    return 0;
}
    

#include<stdio.h>

int delitelCisla(int cislo) {

    int soucet = 0;
    printf("Delitele cisla %d jsou:\n", cislo);

    for (int i = 1; i <= cislo; i++) {
        if (cislo % i == 0) {
            soucet += i;
            printf("%d\n", i);
        }
    }
    return soucet;
}

int dokonaleCislo(int cislo, int soucet) {
    if (cislo * 2 == soucet) {
        printf("cislo je dokonale");
        return 0;
    }
    else {
        printf("Cislo neni dokonale");
        return 1;
    }
}

int main() {

    int cislo;
    int s = delitelCisla(cislo);
    printf("Zadejte cislo:");
    scanf("%d", &cislo);

    printf("vysledek souctu delitelu je: %d", s);
    dokonaleCislo(cislo, s);


    return 0;
} */





