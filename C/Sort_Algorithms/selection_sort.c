#include <stdio.h>

void selectionsort(int arr[],int size);
int get_int(char* string);
void get_int_arr(int arr[],int size);
void print_int_arr(int arr[],int size);


int main(void)
{
    int n = get_int("size of array: ");
    int array[n];

    get_int_arr(array,n);

    selectionsort(array,n);

    print_int_arr(array,n);


}

void selectionsort(int arr[],int size)
{
    int minindex;
    int temp;

        for(int i=0; i<size;i++ )
        {

            minindex= i ;
                for (int j = i+1 ; j<size;j++)
                {
                    if(arr[j]< arr[minindex])
                    {
                        minindex=j;
                    }
                }

            temp=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=temp;

        }
}

int get_int(char* string)
{
    int x;
        printf("%s",string);
        scanf("%d",&x);

        return x;
}

void get_int_arr(int arr[],int size)
{
    /*
    for (int i = 0 ; i < size ; i++)
    {
        printf("Array[%d]:",i);
        scanf("%d",&arr[i]);
    }
    */
       for (int i =0 ; i< size ;i++)
    {
        if (i%3==0)
        {
            arr[i]=7*i;
        }
        else if(i%3==1)
        {
            arr[i]=-2*i;
        }
        else
        {
            arr[i]=i;
        }
    }

}

void print_int_arr(int arr[],int size)
{
    for (int i = 0 ; i< size ; i++)
    {
        printf("%d \n",arr[i]);

    }

    printf("\n");
}