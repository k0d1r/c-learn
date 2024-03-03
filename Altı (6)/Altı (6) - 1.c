#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int randomSayi = rand() % 10000 + 1; 

    int digitCount = 0;
    int tempSayi = randomSayi;

    while (tempSayi > 0) {
        tempSayi /= 10;
        digitCount++;
    }

    printf("Rastgele üretilen sayı: %d\n", randomSayi);
    printf("Sayı %d basamaklıdır.\n", digitCount);

    return 0;
}
