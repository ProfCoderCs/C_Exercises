#include <stdio.h>

int main()
{

    int number1;
    int number2;
    
    //Toplam degere baslangicta 0 degeri atanir

    int total = 0;

    printf("Ilk tam sayiniz giriniz: ");
    scanf("%d", &number1);

    printf("Ikinci tam sayinizi giriniz: ");
    scanf("%d", &number2);


    total = number1 + number2;

    printf("Toplam deger: %d\n", total);
    
    return 0;
}