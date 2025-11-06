/*
#include <stdio.h>
    
    int main() {

        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        
            for (int i = 0; i < 10; i++) {
                printf("%d\n", arr[i] * 2);
            }



    return 0;
}
    
#include<stdio.h>
    int main() {
        
        int vysledek = 1;
        int arr[] = {-1, 2, -3, -4, 5};

            for (int i = 0; i < 5; i++) {

                if (arr[i] < 0) {
                    arr[i] = arr[i] * (-1);
                }
                vysledek *= arr[i];
            }
                printf("%d", vysledek);


        return 0;
    }
  
    #include<stdio.h>
        int main() {
            
            int arr[10];

                printf("Vitejte v tomto zadavaci poli. Prosim zadejte cisla vzestupne.\n");
                printf("--------------------------------------------------------------------\n");

                for (int i = 0; i < 10; i++) {
                    printf("Zadejte prosim %d honotu:\t", i + 1);
                    scanf("%d", &arr[i]);
                }

                    for (int j = 0; j < 10; j++) {
                        if (arr[j] > arr[j + 1]) {
                            printf("Cislice nejsou poporade :(");
                            return 1;
                        }
                        else {
                            printf("Vyborne! Zadal jste cislice zpravne.");
                            return 0;
                        }
                    }

        return 0;
    }


  #include<stdio.h>
    int main() {

        int arr[10];

            for (int i = 0; i < 10; i++) {

                printf("%d\n", arr[i] = (i + 1) * 2);
            }

        return 0;
    }
 

#include <stdio.h>

int main() {
    int fib[20];
    
    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < 20; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", fib[i]);
    }

    return 0;
}
    

#include<stdio.h>
    int main() {

     
        int arr[10];
            for (int i = 0; i < 10; i++) {
                printf("Zadejte hodnotu pole %d: ", i + 1);
                scanf("%d", &arr[i]);
                
            }
            
        int nejvetsi = arr[0] + arr [1]; 
        int soucet = 0;
            for (int j = 1; j < 9; j++) {
                soucet = arr[j] + arr[j + 1];
                 if (nejvetsi > soucet) {
                    continue;
                 }
                 else if (soucet > nejvetsi) {
                    nejvetsi = soucet;
                 }
            }

                printf("Nejvetsi soucet dvou po sobe jdoucich cisel je %d", nejvetsi);

        return 0;
    }

 #include<stdio.h>
    int main () {

            int arr[5];
            int N = 0;
            int pocet = 0;

                for (int i = 0; i < 5; i++) {
                    printf("Zadejte %d. honotu:", i + 1);
                    scanf("%d", &arr[i]);
                }
                    printf("Zadejte delitele:");
                    scanf("%d", &N);

                for (int j = 0; j < 5; j++) {
                    if (arr[j] % N == 0) {
                        pocet += 1;
                    }
                }
                    printf("Pocet cisel v poli delitelnych cislem %d je: %d\n", N, pocet);

        return 0;
    }
 

 #include<stdio.h>
    int main() {
        int arr[9];
        int found;

            printf("Vitam vas v tomto sudoku, prosim zadejte cisla pouze od 1 - 9\n");    

            for (int i = 0; i < 9; i++) {
                printf("Zadejte %d. cislo:  ", i + 1);
                scanf("%d", &arr[i]);
            }
            
            for (int j = 1; j <= 9; j++) {
                found = 0;
                for (int z = 0; z < 9; z++) {
                    if (arr[z] == j) {
                       found = 1;
                       break;
                    }
                }
            if (!found) {
                printf("V poli se nenachazi vsechna cisla od 1 do 9.. Chybi: %d", j);
                return 1;
                    }
            }   
            
            printf("V poli jsou vsechna cisla!");
        
            return 0;
        }


#include<stdio.h>
    int main() {

        int arr[10];
        int L;
        int low = 0;
        int hig = 0;
        int same = 0;

        for (int i = 0; i < 10; i++) {
            printf("Zadejte %d. cislo: ", i + 1);
            scanf("%d", &arr[i]);
        }

        printf("Zadejte limit:");
        scanf("%d", &L);

        for (int j = 0; j < 10; j++) {
            if (arr[j] < L) {
                low += 1;
            }
            else if (arr[j] > L){
                hig += 1;
            }
            else {
                same += 1;
            }
        }

        printf("Nad limitem bylo: %d cisel\n Pod limitem bylo: %d cisel\n Stejnych jako limit bylo: %d", hig, low, same);


    return 0;
    }
*/

#include <stdio.h>
    int main {
        int arr[10];

         for (int i = 0; i < 10; i++) {
                printf("Zadejte %d. cislo:  ", i + 1);
                scanf("%d", &arr[i]);
            }

        for (int j = 0l j < 10; j++) {
            
        }


        return 0;
    }



    

