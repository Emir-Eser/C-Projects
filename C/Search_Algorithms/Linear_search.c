#include<stdio.h>

int get_int(char* string);
void get_int_arr (int arr[],int size);

int main(void)
{
    int n = get_int("Size of array:");
    int wanted= get_int("looking for:");
    int array[n];
    get_int_arr(array,n);

        for (int i = 0 ; i < n ; i++)
        {
            if( array[i] == wanted)
            {
                printf("Found in Array[%d].\n",i);
                return 0;
            }
        }
        printf("Not found.\n");
}

int get_int(char* string)
{
    int x;
        printf("%s",string);
        scanf("%d",&x);
        return x;
}

void get_int_arr (int arr[],int size)
{
   for (int i = 0 ; i <size ; i++)
   {
        arr[i]= i*i;
   }

}