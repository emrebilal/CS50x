#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float cash;
    int coin;
    int counter = 0;
    do
    {
        cash = get_float("Change owed: ");
        coin = round(cash*100); 
    }while(cash <= 0);

    while(coin >= 25){
        coin = coin-25;
        counter++;
    }
    while(coin >= 10){
        coin = coin-10;
        counter++;
    }
    while(coin >= 5){
        coin = coin-5;
        counter++;
    }
    while(coin >= 1){
        coin = coin-1;
        counter++;
    }
    printf("%i\n",counter);
}
