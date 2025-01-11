#include <stdio.h>

int main()
{

    float number1;
    float number2;
    
    //Toplam degere baslangicta 0 degeri atanir

    float multiplication = 0;

    printf("Ilk ondalikli sayinizi giriniz: ");
    scanf("%f", &number1);

    printf("Ikinci ondalikli sayinizi giriniz: ");
    scanf("%f", &number2);


    multiplication = number1 * number2;

    printf("Carpim degeri: %f\n", multiplication);
    
    return 0;
}