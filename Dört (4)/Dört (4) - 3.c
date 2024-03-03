#include <stdio.h>
#include <math.h>

int isArmstrong(int num);
void findArmstrongNumbers();

int main() {
    int number;

    printf("Bir sayı girin: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d Armstrong bir sayıdır.\n", number);
    } else {
        printf("%d Armstrong bir sayı değildir.\n", number);
    }

    findArmstrongNumbers();

    return 0;
}

int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (result == num);
}

void findArmstrongNumbers() {
    printf("1 ile 1000 arasındaki Armstrong sayıları:\n");

    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}
