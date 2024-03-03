#include <stdio.h>
#include <math.h> 

int main() {
    float x, y, z;

    printf("Lutfen uc kenar uzunlugunu sirayla giriniz (x, y, z): ");
    scanf("%f %f %f", &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Kenar uzunluklari pozitif olmalidir.\n");
    } else if (fabs(y - z) < x && x < y + z && fabs(x - z) < y && y < x + z && fabs(x - y) < z && z < x + y) {
        printf("Bu kenar uzunluklariyla bir ucgen olusturulabilir.\n");
    } else {
        printf("Bu kenar uzunluklariyla bir ucgen olusturulamaz. ");
        if (fabs(y - z) >= x) {
            printf("x kenari y ve z kenarlarindan daha kisa.\n");
        }
        if (fabs(x - z) >= y) {
            printf("y kenari x ve z kenarlarindan daha kisa.\n");
        }
        if (fabs(x - y) >= z) {
            printf("z kenari x ve y kenarlarindan daha kisa.\n");
        }
    }

    return 0;
}
