#include <stdio.h>

int main()
{
  
    printf("Fiyat� giriniz: ");
    int fiyat = 0;
    char c;
    while ((c = getchar()) != '\n')
    {
        fiyat = fiyat * 10 + (c - '0');
    }


    printf("�ndirim secenegi istiyor musunuz? (E/H): ");
    c = getchar();
    getchar(); 
    if (c == 'E' || c == 'e')
    {

        fiyat = fiyat * 0.9;
        printf("�ndirimli fiyat: %d\n", fiyat);
    }
    
    else if (c == 'H' || c == 'h')
    
    printf("Herhangi bir indirim uygulanamad�. Fiyat: %d\n",fiyat);
    
    printf("Taksit secenegi istiyor musunuz? (E/H): ");
    c = getchar();
    getchar(); 
    if (c == 'E' || c == 'e')
    {

        printf("Ka� taksit istiyorsunuz? (2-12): ");
        int taksit = 0;
        while ((c = getchar()) != '\n')
        {
            taksit = taksit * 10 + (c - '0');
        }

        int tutar = fiyat / taksit;
        printf("Taksit tutar�: %d\n", tutar);
    }
    
    

    return 0;
}
