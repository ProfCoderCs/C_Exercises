#include <stdio.h>

//Belli bir degere kadar olan asal sayilari ekrana basan program
int main()
{

    int number;
    int primeCounter;


    printf("Asal sayilar icin deger giriniz: ");
    scanf("%d", &number);



    // Girilen deger 1 den buyukse for dongusune ilerle
    if (number > 1) 
    for (int counter = 1; counter <= number; counter++) //  Girilen degere kadar olan her bir asal sayiyi sayiyor.
    {   

        //primeCounter sayacina baslangic deger olarka 0 atama
        primeCounter = 0;

        //counterEachPrime her bir asal sayiyi tespit etmek icin
        for (int counterEachPrime = 1;  counterEachPrime <= counter; counterEachPrime++) // Asal sayilari ekrana basiyor 
        {

            
            if (counter % counterEachPrime == 0)
            {
            
                primeCounter++;
            
            }
            

        }

        //primeCounter sayaci 2'ye esitse degeri ekrana bas
        if (primeCounter == 2)
        {
            printf("%d ", counter);
        }

    
    }


        
    return 0;
}