#include <stdio.h>

int main() {
    int n;

   
    printf("Satır sayısını girin: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }

        
        for (int k = 1; k <= n - i + 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
