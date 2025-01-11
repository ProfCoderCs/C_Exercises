#include <stdio.h>

int main()
{

    float kisaKenar;
    float uzunKenar;
    
    float alan = 0;
    float cevre = 0;
    

    printf("Kisa kenari giriniz: ");
    scanf("%f", &kisaKenar);

    printf("Uzun kenari giriniz: ");
    scanf("%f", &uzunKenar);


    cevre = kisaKenar + uzunKenar;

    alan = kisaKenar * uzunKenar;

    printf("Dikdortgenin alani: %.2f\n", alan);
    printf("Dikdortgenin cevresi: %.2f\n", cevre);

    return 0;
}