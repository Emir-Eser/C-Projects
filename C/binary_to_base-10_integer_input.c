#include<stdio.h>



int dig_div(int digits[],int binary);

int is_bin(int digits[],int size);

int bin_to_base_10(int digits[],int size);

int power(int x,int y);

int main(void)
{
    int binary;
    int base_10;
    int digits[10];
    int size;
    int p;

        printf("Enter a binary number:");
        scanf("%d",&binary);

    size = dig_div(digits,binary);

    p = is_bin(digits,size);

        if ( p==0)
        {
            printf("This number isn't a binary number.");

            return 1;
        }

    base_10 = bin_to_base_10(digits,size);

        printf("Base-10: %d\n",base_10);



    
}


int dig_div(int digits[],int binary)
{
    int i=0;

        while(binary!=binary%10)
        {
            int digit=binary%10;

            binary= (binary - digit)/10;

            digits[i]=digit;

            i++;

        }

        digits[i]=binary;

        return i+1;
}

int is_bin(int digits[],int size)
{
    for(int i=0; i<size;i++)
    {
        if ( !(digits[i]==1 || digits[i]==0) )
        {
            return 0;
        }

    }

    return 1;
}

int bin_to_base_10(int digits[],int size)
{
    int sum=0;
        for(int i=0; i <size ; i++)
        {
            sum = sum + digits[i]*power(2,i);
        }

    return sum;

}

int power(int x,int y)
{
    int product=1;

        for(int i = 0 ; i < y ; i++)
        {
            product = product*x;
        }  

        return product;
}