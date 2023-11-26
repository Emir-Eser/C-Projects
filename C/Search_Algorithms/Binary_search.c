#include<stdio.h>
int get_int (char *string);
void get_int_arr (int arr[],int size);
int middle (int *fin,int *lin);
int search (int arr[],int *fin,int *lin,int wanted);

int main(void)
{
    int n = get_int("Size of array:");
    int wanted = get_int("Looking for:");
    int array[n];
    int first_index = 0;
    int last_index = n-1;
    int p;

        get_int_arr(array,n);

    p = search(array,&first_index,&last_index,wanted);

        if (p==-1)
        {
            printf("Not Found.\n");
        }

        else
        {
            printf("Found in Array[%d].\n",p);
        }
}



int get_int (char *string)
{
    int x;
        printf("%s",string);
        scanf("%d",&x);
        return x;
}

void get_int_arr (int arr[],int size)
{
    /*
    for (int i = 0 ; i < size ; i++)
    {
        printf("Array[%d]:",i);
        scanf("%d",&arr[i]);
    }
    */
   for (int i = 0 ; i <size ; i++)
   {
        arr[i]= i*i;
   }
}

int middle (int *fin,int *lin)
{
    int mid;
    int sum = *fin + *lin;
        if (sum%2==0)
        {
            mid = sum/2;
        }

        else
        {
            mid = (sum-1)/2;
        }

        return mid ;
}

int search (int arr[],int *fin,int *lin,int wanted)
{
    int mid;
        while (*fin!=*lin)
        {
            mid = middle(fin,lin);

                if(arr[mid]==wanted)
                {
                    return mid;
                }

                else if(arr[mid]>wanted)
                {
                    *lin = mid - 1 ;
                }

                else
                {
                    *fin = mid + 1 ;
                }
        }

        if (arr[*fin]==wanted)
        {
            return *fin;
        }

        else
        {
            return -1;
        }

}