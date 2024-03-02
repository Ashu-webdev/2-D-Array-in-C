/* To add two matrices*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int mat1[10][10],mat2[10][10],sum[10][10],r1,c1,r2,c2,i,j;
   printf("Enter row_size and column_size of matrix 1:");
   scanf("%d%d",&r1,&c1);
   printf("Enter row_size and column_size of matrix 2:");
   scanf("%d%d",&r2,&c2);
   if (r1!=r2 || c1!=c2)
   {
     printf("Matrix addition is not possible");
     exit(0);
   }
   printf("\nEnter %d elements in matrix 1\n",r1*c1); 
   for (i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)	   
	   scanf("%d",&mat1[i][j]);
   }   
   printf("\nElements of Matrix 1 are ");
   for (i=0;i<r1;i++)
   {
      for (j=0;j<c1;j++)
           printf("%d\t",mat1[i][j]);
   }
   
   printf("\nEnter %d elements in matrix 2\n",r2*c2); 
   for (i=0;i<r2;i++)
   {
      for(j=0;j<c2;j++)
         scanf("%d",&mat2[i][j]);
   }
   printf("\nMatrix 2 elements are ");
   for (i=0;i<r2;i++)
   {
      for (j=0;j<c2;j++)
        printf("%d\t",mat2[i][j]);
   }

   for (i=0;i<r1;i++)
   {
      for (j=0;j<c1;j++)
        sum[i][j]=mat1[i][j]+mat2[i][j];
   }

   printf("Sum of matrix 1 and 2 is ");
   for (i=0;i<r1;i++)
   {
      for (j=0;j<c1;j++)
         printf("%d\t",sum[i][j]);
   printf("\n");
   }
}   
