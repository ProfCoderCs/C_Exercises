#include <stdio.h>

int main()
{

    float fahrenheitValue;
    float celciusValue;
    



    printf("Sicaklik degeriniz fahrenheit olarak giriniz: ");
    scanf("%f", &fahrenheitValue);



    celciusValue =  5  * (fahrenheitValue - 32) / 9;

    printf("Celcius derecesi: %f\n", celciusValue);
    
    return 0;
}