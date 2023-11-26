#include<stdio.h>

void reverse(int array[],int size);

int main(void)
{
    
    int x;
    int digits[25];
    int i= 0 ;
        printf("Enter a positive integer:");
        scanf("%d",&x);

        while ( x != x%10)
        {
            int digit = x%10;
            digits[i] = digit;
            x = (x - digit)/10;
            i++;
        }

    digits[i]=x;
        
        reverse(digits,i+1);

        for (int j =0 ; j < i+1;j++)
        {
            printf("%d ",digits[j]);
        }
        
        printf("\n"); 

}

void reverse(int array[],int size)
{   
    int x;

    if(size%2==1)
    {
       x= (size-1)/2; 
    }

    else
    {
        x=size/2;
    }
        for(int i = 0; i <x; i++)
        {
            int temp = array[i];
            array[i]=array[size-1-i];
            array[size-1-i]=temp;
        }
}