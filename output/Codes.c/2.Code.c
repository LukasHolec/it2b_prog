#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    
    srand(time(NULL));


        if (rand() % 2 == 0) {
            printf("Orel");
        } else {
            printf("Pana");
        }
    return 0;
}