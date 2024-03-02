/* To find out the sum of each row and each column of a matrix*/
#include<stdio.h>
#include<stdlib.h>
int main()
{   int a[6][6],r,c,i,j,sum=0;
    printf("Enter size of matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter %d no of elements\n",r*c);
    for(i=0;i<r;i++)
    {	
	 for(j=0;j<c;j++)
	    scanf("%d",&a[i][j]);	
    }
    printf("Elements of matrix are\n");
    for(i=0;i<r;i++)
    {
      for (j=0;j<c;j++)
         printf("%d\t",a[i][j]);
    }
    for (i=0;i<r;i++)
    {   sum=0;
	for (j=0;j<c;j++)
	    sum=sum+a[i][j];
            printf("\nSum of the elements of row %d is %d\n",i,sum);
    }
    for(j=0;j<c;j++)
    {
      sum=0; 
      for (i=0;i<r;i++)
	  sum=sum+a[i][j];
          printf("\nSum of the elements of column %d is %d\n",j,sum);
    }
}    

