#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: \n");
    }while(h < 1 || h > 8);

    for(int i = 1; i<=h; i++){
        for(int j = h; j>i; j--){
            printf(" ");
        }
        for(int k = 1; k<=i; k++){
            printf("#");
        }
        printf("  ");
        for(int k = 1; k<=i; k++){
            printf("#");
        }
    printf("\n");
    }
}
