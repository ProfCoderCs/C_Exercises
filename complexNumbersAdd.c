#include <stdio.h>

//Kullanici tarafindan sayi girisi
int main()
{

    float number1;
    float number2;

    float total = 0;
    
    printf("Bir ondalikli sayi giriniz: ");
    scanf("%f", &number1);

    printf("Bir tane daha ondalikli sayi giriniz: ");
    scanf("%f", &number2);

    total = number1 + number2;

    printf("Girilen ondalikli sayilarin toplami: %f\n", total);



    return 0;
}