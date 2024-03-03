#include <stdio.h>

int isPerfectNumber(int num);
void findPerfectNumbers();

int main() {
    int number;

    printf("Bir sayı girin: ");
    scanf("%d", &number);

    if (isPerfectNumber(number)) {
        printf("%d mükemmel bir sayıdır.\n", number);
    } else {
        printf("%d mükemmel bir sayı değildir.\n", number);
    }

    findPerfectNumbers();

    return 0;
}

int isPerfectNumber(int num) {
    int sum = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum == num);
}

void findPerfectNumbers() {
    printf("1 ile 100 arasındaki mükemmel sayılar:\n");

    for (int i = 1; i <= 100; i++) {
        if (isPerfectNumber(i)) {
            printf("%d\n", i);
        }
    }
}
