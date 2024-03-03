#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main() {
    int start, end;

    printf("Başlangıç değerini girin: ");
    scanf("%d", &start);

    printf("Bitiş değerini girin: ");
    scanf("%d", &end);
    printf("Asal sayılar %d ile %d arasında:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
