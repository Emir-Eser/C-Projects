 #include <stdio.h>

void bubblesort(int arr[],int size);
int get_int(char* string);
void get_int_arr(int arr[],int size);
void print_int_arr(int arr[],int size);

 int main(void)
 {
    int n = get_int("size of array: ");
    int array[n];

    get_int_arr(array,n);

    bubblesort(array,n);

    print_int_arr(array,n);



 }


void bubblesort(int arr[],int size)
{
    int temp;

        for (int i = 0 ; i < size ; i++)
        {

            for(int j = 0 ; j<size-i-1;j++)
            {
                if ( arr[j]>arr[j+1])
                {
                    temp= arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }

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
        printf("%d\n ",arr[i]);

    }

    printf("\n");
}
