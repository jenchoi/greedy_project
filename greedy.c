#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int count_coins = 0;
    
    do
    {
        printf("How much change do I owe?\n");
        change = GetFloat();
    }
    while (change <= 0);
    
    int cents;
    cents = round(change*100);
    
    while (cents >= 25)
        {
        count_coins++;
        cents-=25;
        }
    while (cents>=10)
        {
        count_coins++;
        cents-=10;
        }
    while (cents>=5)
        {
        count_coins++;
        cents-=5;
        }
    while (cents>=1)
        {
        count_coins++;
        cents-=1;
        }
    printf("%i\n",count_coins);
}

