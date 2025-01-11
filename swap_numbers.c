#include <stdio.h>

int main()
{

    int number1;
    int number2;
    int swapNumber;
    



    printf("Ilk tam sayiniz giriniz: ");
    scanf("%d", &number1);

    printf("Ikinci tam sayinizi giriniz: ");
    scanf("%d", &number2);

    swapNumber = number2; // swapNumber degiskenine number2 degeri atandi

    

    number2 = number1; // number2 degiskenine number1 degeri atandi

    number1 = swapNumber; // number1 degiskenine swapNumber degeri atandi;

    printf("Ilk degiskenin yeni degeri: %d\n", number1);    
    printf("Ikinci degiskenin yeni degeri: %d\n", number2);
    
    return 0;
}