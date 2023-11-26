#include <stdio.h>

int middle(int fin, int lin );

int get_int (char *string);

void get_int_arr (int arr[],int size);

int binarysearch(int arr[] , int fin, int lin, int wanted ) ;

int main (void)
{
    int n = get_int("Size of array:");
    int wanted = get_int("Looking for:");
    int array[n];
    int first_index = 0;
    int last_index = n-1;
    int p ;
    get_int_arr(array,n);
    p = binarysearch(array, first_index,last_index,wanted);

        if(p==-1)
        {
            printf("not found \n" ) ;
        }

        else
        {
            printf("found in array[%d]. \n" , p );
        }
}

int middle(int fin, int lin )
{
    int mid;
    int sum = fin+lin;

        if(sum%2==1)
        {
            return (sum-1)/2;
        }
        else
        {
            return sum/2;
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
       for(int i=0; i<size; i++)
   {
        arr[i]=2*i;
   }
}

int  binarysearch (int arr[] , int fin , int lin, int wanted)
{
    int mid =middle(fin  , lin);
        if(fin >= lin)
        {
            if (arr[fin] == wanted)
            {
                return fin ;
            }

            else
            {
                return -1;
            }
        }

        if(arr[mid]==wanted)
        {
            return mid;
        }
        else if (arr[mid] > wanted)
        {
            return binarysearch( arr, fin, mid -1, wanted);
        }
        else
        {
            return  binarysearch(arr, mid +1, lin, wanted );
        }
}

