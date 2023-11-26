#include<stdio.h>

int get_int(char* string);

void get_int_arr (int arr[],int size);

void print_int_arr(int arr[],int size);

void merge_sort (int arr[],int copy_arr[],int fin,int lin);

int middle (int fin,int lin);

int main()
{
    int n = get_int("size of n:");
    int array[n];
    int copy_arr[n];
    int first_index = 0;
    int last_index = n - 1;

        get_int_arr(array,n);

        for (int i = 0 ; i < n ; i++)
        {
            copy_arr[i]=array[i];
        }

        merge_sort(array,copy_arr,first_index,last_index);

        print_int_arr(array,n);

}

void merge_sort (int arr[],int copy_arr[],int fin,int lin)
{
    int mid = middle(fin,lin);
    int size = lin - fin + 1;

        if(fin==lin) {return;}

        merge_sort(arr,copy_arr,fin,mid);

        if(mid+1!=lin)
        {
            merge_sort(arr,copy_arr,mid+1,lin);
        }

        for(int i = 0, j = 0 , n = fin ; n <=lin;n++)
        {
            if(fin+i<=mid && mid+1+j<=lin)
            {
                if(copy_arr[fin+i]<copy_arr[mid+1+j])
                {
                    arr[n]=copy_arr[fin+i];
                    i++;
                }
                else
                {
                    arr[n]=copy_arr[mid+1+j];
                    j++;
                }
            }
            else if (fin+i>mid && mid+1+j<=lin )
            {
                arr[n]=copy_arr[mid+1+j];
                j++;
            }
            else if (fin+i<=mid && mid+1+j>lin)
            {
                arr[n]=copy_arr[fin+i];
                i++;
            }

        }

        for (int k = fin ; k <= lin ; k++)
        {
            copy_arr[k]=arr[k];
        }




}

int middle (int fin,int lin)
{
    int sum = fin + lin;

        if(sum%2==1)
        {
            return (sum-1)/2;
        }

        else
        {
            return sum/2;
        }
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


}