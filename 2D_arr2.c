/* To find out the transpose of any matrix*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int mat[10][10],transpose[10][10],r,c,n,i,j;
   printf("Enter dimension of matrix:");
   scanf("%d%d",&r,&c);
   printf("Enter %d elements\n",r*c); 
   for (i=0;i<r;i++)
   {
     for (j=0;j<c;j++)
       scanf("%d",&mat[i][j]);
   }
   printf("Elements of matrix are\n");
   for (i=0;i<r;i++)
   {  for (j=0;j<c;j++)
        printf("%d\t",mat[i][j]);
   printf("\n");
   }
   for (i=0;i<r;i++)
   {  for (j=0;j<c;j++)
	transpose[j][i]=mat[i][j];
   }
   printf("\nThe transpose matrix is\n");
   for (i=0;i<c;i++)
   {
      for (j=0;j<r;j++)
       printf("%d\t",transpose[i][j]);
   printf("\n"); 
   }
   }   
