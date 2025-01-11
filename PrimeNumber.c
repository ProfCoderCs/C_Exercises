#include <stdio.h>

//Kullanici tarafindan sayi girisi
int main()
{

    int number;
    int primeCounter = 0;


    printf("Bir tam sayi giriniz: ");
    scanf("%d", &number);




    if (number >1)
    for (int counter = 1; counter <= number; counter++)
    {
        if (number % counter == 0)
        {
            primeCounter++;
        }
    
    }


    if (primeCounter == 2)
    {
        printf("Bu sayi asal sayidir ve degeri : %d\n", number);
    }

    else
    {  
        printf("Bu sayi asal sayi degildir. Ve degeri : %d\n", number);

        if (number <= 1)
        {
            printf("Asal sayilar 1 den buyuk dogal sayilardir.\n");
            printf("Negatif sayilar asal sayi degillerdir.\n");
        }
        
        if (primeCounter > 2)
        {
            printf("Asal sayilarin kurali 1 e ve kendisine bolunecek turevleri olmayacak\n");    
        }
        
        
    }
        
    return 0;
}