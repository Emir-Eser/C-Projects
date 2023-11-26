#include<stdio.h>
#include<stdlib.h>



int main(void)
{
    int row_1 , column_1 , row_2 , column_2;
    char* matrix_name_1 = malloc(20);
    char* matrix_name_2 = malloc(20);


        if (matrix_name_1 == NULL || matrix_name_2 == NULL)
        {
            printf("Memory allocation failed.");
            return 1 ;
        }


        printf("Enter the name of the first matrix:");
        scanf("%s",matrix_name_1);

        printf("Enter the name of the second matrix:");
        scanf("%s",matrix_name_2);    

        printf("Enter the number of rows for matrix %s:",matrix_name_1);
        scanf("%d",&row_1);

        printf("Enter the number of columns for matrix %s:",matrix_name_1);
        scanf("%d",&column_1);

        printf("Enter the number of rows for matrix %s:",matrix_name_2);
        scanf("%d",&row_2);

        printf("Enter the number of columns for matrix %s:",matrix_name_2);
        scanf("%d",&column_2);

        if(column_1!=row_2)
        {   
            printf("\nThe matrices %s and %s cannot be multiplied.\n\n",matrix_name_1,matrix_name_2);   
            return 1;
        }

    int matrix_1[row_1][column_1] , matrix_2[row_2][column_2];
    int matrix_product[row_1][column_2];

        printf("\n\nFill in matrix %s.\n\n\n", matrix_name_1);

        for(int i = 0 ; i < row_1 ; i++)
        {
            for(int j = 0 ; j < column_1 ; j++)
            {
                printf("Enter %s[%d][%d]:",matrix_name_1,i,j);
                scanf("%d",&matrix_1[i][j]);
            }

            printf("\n");

        }

        printf("\n\nFill in matrix %s.\n\n\n",matrix_name_2);

        for(int i = 0 ; i < row_2 ; i++)
        {
            for(int j = 0 ; j < column_2 ; j++)
            {
                printf("Enter %s[%d][%d]:",matrix_name_2,i,j);
                scanf("%d",&matrix_2[i][j]);
            }

            printf("\n");

        }

        for(int i1 = 0 ; i1 < row_1 ; i1++)
        {
            for(int j2 =0; j2 < column_2 ; j2++)
            {
                int x = 0 ; 

                    for(int j1 = 0,  i2 = 0 ; j1 < column_1 && i2 < row_2; j1++ , i2++)
                    {

                        x= x + matrix_1[i1][j1]*matrix_2[i2][j2];

                    }
                
                matrix_product[i1][j2]=x;

            }
        }

        printf("\n\n\n    Matrix Product:\n\n");

        for (int i = 0 ; i < row_1 ; i++)
        {

            for( int j = 0 ; j < column_2;j++) 
            {
                printf("%-10d",matrix_product[i][j]);
            }

            printf("\n");
        }

        printf("\n\n\n");        

        free(matrix_name_1);
        free(matrix_name_2);



}