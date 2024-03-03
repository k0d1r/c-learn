#include <stdio.h>

// 1

int main()
{
   
    double a, b, c;
    printf("a yý gir: ");
    scanf("%lf", &a);
    printf("b yi gir: ");
    scanf("%lf", &b);
    printf("c yi gir: ");
    scanf("%lf", &c);
    double delta = b * b - 4 * a * c;


    if (delta > 0)
    {
        printf("Denklemin iki farkli koku var.\n");
    }
    else if (delta == 0)
    {
        printf("Denklemin tek koku var.\n");
    }
    else
    {
        printf("Denklemin koku yok.\n");
    }

    return 0;
}











//2













//3
















