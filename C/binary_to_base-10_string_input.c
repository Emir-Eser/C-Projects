#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int is_bin(char* binary);

int power(int x , int y);

int bin_to_base_10(int digits[],int size);

int main(void)
{
    char* binary= malloc(50*sizeof(char));
    int p,base_10;

        printf("Enter a binary number:");
        scanf("%s",binary);
    int size = strlen(binary);
    int digits[size];

    p = is_bin(binary);

        if( p==0)
        {
            printf("This number isn't a binary number.\n");
            return 1;
        }
    
    for (int i=0; i< size ; i++)
    {
        char* digit = malloc(sizeof(char));
        *digit=binary[size-1-i];
        digits[i] = atoi(digit);
    }

    base_10 = bin_to_base_10(digits,size);

        printf("Base-10: %d",base_10);
    
}


int is_bin(char* binary)
{
    int size = strlen(binary);

        for (int i=0 ; i < size ; i++)
        {
            if (!(binary[i]=='0' || binary[i]=='1'))
            {
                return 0;
            }
        }

        return 1;
}

int power(int x,int y)
{
    int product=1;

        for(int i=0; i<y ;i++)
        {
            product = product*x;
        }

        return product;
}

int bin_to_base_10(int digits[],int size)
{
    int sum = 0;

        for(int i=0; i<size; i++)
        {
            sum = sum + digits[i]*power(2,i);
        }

        return sum;

}