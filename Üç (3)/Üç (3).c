#include <stdio.h>

int main()
{
  
    printf("Fiyatý giriniz: ");
    int fiyat = 0;
    char c;
    while ((c = getchar()) != '\n')
    {
        fiyat = fiyat * 10 + (c - '0');
    }


    printf("Ýndirim secenegi istiyor musunuz? (E/H): ");
    c = getchar();
    getchar(); 
    if (c == 'E' || c == 'e')
    {

        fiyat = fiyat * 0.9;
        printf("Ýndirimli fiyat: %d\n", fiyat);
    }
    
    else if (c == 'H' || c == 'h')
    
    printf("Herhangi bir indirim uygulanamadý. Fiyat: %d\n",fiyat);
    
    printf("Taksit secenegi istiyor musunuz? (E/H): ");
    c = getchar();
    getchar(); 
    if (c == 'E' || c == 'e')
    {

        printf("Kaç taksit istiyorsunuz? (2-12): ");
        int taksit = 0;
        while ((c = getchar()) != '\n')
        {
            taksit = taksit * 10 + (c - '0');
        }

        int tutar = fiyat / taksit;
        printf("Taksit tutarý: %d\n", tutar);
    }
    
    

    return 0;
}
