#include <stdio.h>

//Basit faiz hesaplayici
int main()
{

    float faizMiktari;
    int anaPara;
    float faizOrani = 0.06;

    int sure;
    

    printf("Ana parayi giriniz: ");
    scanf("%d", &anaPara);

    printf("Yatirilacak sureyi ay olarak giriniz: ");
    scanf("%d", &sure);



    faizMiktari = anaPara * sure * faizOrani;


    printf("Faiz miktari: %.2f\n", faizMiktari);

    return 0;
}