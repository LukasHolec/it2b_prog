#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    float nahoda = ((float) rand () / RAND_MAX) * 10;
    printf("%f", nahoda);
return 0;
}