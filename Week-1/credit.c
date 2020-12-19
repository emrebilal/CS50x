#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long n = get_long("Enter credit number: ");  
    long check = n;
    long n2 = n;
    int c1 = 0;
    int c2 = 0;
    int head;

    while(check > 0){
        check = check/10;
        c1++;
    }
    while(c1-2!=c2){
        n2 = n2/10;
        head = n2;
        c2++;
    }

    int a = 0;
    int b = 0;
    int temp = 0;
    if((c1 == 15) && (head == 34 || head == 37))
    {
        while(n>0){
            a += n%10;
            n /= 10;
            
            if(n>0){
                temp = (n%10)*2;
                b += temp/10;
                b += temp%10;
                n = n/10;
            }
        }

        int result = (a+b)%10;
        if(result==0){
            printf("AMEX\n");
        }
        else{
            printf("INVALID\n");
        }

    }
    else if((c1 == 16) && (head == 51 || head == 52 || head == 53 || head == 54 || head == 55))
    {
        while(n>0){
            a += n%10;
            n /= 10;
            
            if(n>0){
                temp = (n%10)*2;
                b += temp/10;
                b += temp%10;
                n = n/10;
            }
        }

        int result = (a+b)%10;
        if(result==0){
            printf("MASTERCARD\n");
        }
        else{
            printf("INVALID\n");
        }
    }
    else if((c1 == 13 || c1 == 16) && (head/10 == 4))
    {
        while(n>0){
            a += n%10;
            n /= 10;
            
            if(n>0){
                temp = (n%10)*2;
                b += temp/10;
                b += temp%10;
                n = n/10;
            }
        }

        int result = (a+b)%10;
        if(result==0){
            printf("VISA\n");
        }
        else{
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

}
