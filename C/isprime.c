#include<stdio.h>
#include<math.h>

int get_int(char* string);

int isprime(int p);

int main(void)
{
    int n = get_int("Saerch until: ");
    FILE *file = fopen("primenumberlist.txt","a");
        if ( file == NULL)
        {
            return 1;
        }

        fprintf(file,"2\n");
        fprintf(file,"3\n");

        for (int i=0; i<n ; i++)
        {
            int p = 6*i+1;

                if(isprime(p)==1)
                {
                    fprintf(file,"%d\n",p);
                }
            p=p+4;
                if(isprime(p)==1)
                {
                    fprintf(file,"%d\n",p);
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

int isprime(int p)
{
    int root = sqrt(p);

        if (p==1)
        {
            return 0;
        }

        for(int i =2; i <= root ; i++)
        {
            if(p%i == 0)
            {
                return 0;
            }
        }

        return 1;
}
