#include <stdio.h>
#include <ctype.h>

int main() {
    char karakter;

    printf("Bir karakter gir: ");
    scanf(" %c", &karakter);
    printf("tolower(%c) = %c\n", karakter, tolower(karakter));
    printf("toupper(%c) = %c\n", karakter, toupper(karakter));

    if (islower(karakter)) {
        printf("%c küçük harf bir karakterdir.\n", karakter);
    } else if (isupper(karakter)) {
        printf("%c büyük harf bir karakterdir.\n", karakter);
    } else {
        printf("%c bir harf değildir.\n", karakter);
    }
    
    if (isalpha(karakter)) {
        printf("%c bir harf karakteridir.\n", karakter);
    } else {
        printf("%c bir harf karakteri değildir.\n", karakter);
    }

    if (isalnum(karakter)) {
        printf("%c bir harf veya rakam karakteridir.\n", karakter);
    } else {
        printf("%c bir harf veya rakam karakteri değildir.\n", karakter);
    }

    if (isdigit(karakter)) {
        printf("%c bir rakam karakteridir.\n", karakter);
    } else {
        printf("%c bir rakam karakteri değildir.\n", karakter);
    }

    return 0;
}
