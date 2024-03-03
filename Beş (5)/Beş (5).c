#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void sifre_kurallari()
{
    printf("�ifreniz a�a��daki �artlar� sa�lamal�d�r:\n");
    printf("- En az 8, en fazla 16 karakter uzunlu�unda olmal�d�r.\n");
    printf("- Hem say� hem de harf i�ermelidir.\n");
    printf("- Hem b�y�k hem de k���k harf i�ermelidir.\n");
}

int main()
{
    char sifre[17];
    int i, uzunluk, sayi_var, harf_var, buyuk_var, kucuk_var; 
    scanf("%s", sifre);
    uzunluk = strlen(sifre); 
    sayi_var = 0; 
    harf_var = 0; 
    buyuk_var = 0; 
    kucuk_var = 0; 
    for (i = 0; i < uzunluk; i++) 
    {
        if (isdigit(sifre[i])) 
        {
            sayi_var = 1; 
        }
        if (isalpha(sifre[i])) 
        {
            harf_var = 1; 
            if (isupper(sifre[i])) 
            {
                buyuk_var = 1;
            }
            if (islower(sifre[i])) 
            {
                kucuk_var = 1;
            }
        }
    }
    if (uzunluk >= 8 && uzunluk <= 16 && sayi_var && harf_var && buyuk_var && kucuk_var)
    {
        printf("�ifre uygun\n"); 
    }
    else 
    {
        printf("�ifre uygun de�il\n"); 
        sifre_kurallari(); 
    }
    return 0;
}

