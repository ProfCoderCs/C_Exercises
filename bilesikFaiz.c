#include <stdio.h>


float faizDenklem(int sure, float faizOrani)
{   
    float hesap = 1.00;

    for (; sure >= 1; sure--)
    {
        hesap = hesap * (1 + faizOrani);
    }
    
    return hesap;

}

int main()
{

    float faizMiktari;
    float faizOrani = 0.1;
    float toplamTutar = 0.0;
    int sure;
    int anaPara;

    printf("Ana parayi giriniz: ");
    scanf("%d", &anaPara);

    printf("Yatirilacak sureyi yil olarak giriniz: ");
    scanf("%d", &sure);




    toplamTutar = anaPara *  faizDenklem(sure, faizOrani);

    printf("Toplam tutar: %.2f\n", toplamTutar);
    
    faizMiktari= toplamTutar - anaPara;

    printf("Bilesik faiz miktari: %.2f\n", faizMiktari);

    return 0;
}