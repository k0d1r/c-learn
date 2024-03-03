#include <stdio.h>

int main() {
    int number;

    
    printf("Bir sayı girin: ");
    scanf("%d", &number);

    int sum = 0;

    if (number <= 1) {
        printf("Mükemmel bir sayı değildir.\n");
    } else {
        for (int i = 1; i < number; i++) {
            if (number % i == 0) {
                sum += i;
                if (sum > number) {
                    printf("Mükemmel bir sayı değildir.\n");
                    break;
                }
                
                continue;
            }
        }

        if (sum == number) {
            printf("Mükemmel bir sayıdır.\n");
        } else {
            printf("Mükemmel bir sayı değildir.\n");
        }
    }

    return 0;
}
