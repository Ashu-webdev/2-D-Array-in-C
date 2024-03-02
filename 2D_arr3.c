/* To find out the sum of diagonal elements of any matrix*/
#include<stdio.h>
#include<stdlib.h>
int main()
{  int a[6][6],n,r,c,i,j,trace=0;
   printf("Enter size of matrix:");
   scanf("%d",&n);
   printf("Enter %d elements of matrix",n*n);
   for (i=0;i<n;i++)
   { 
     for (j=0;j<n;j++)
        scanf("%d",&a[i][j]);
   }
   printf("Elements of matrix are\n");
   for (i=0;i<n;i++)
   {  
      for (j=0;j<n;j++)
	   printf("%d\t",a[i][j]);
   }
   for (i=0;i<n;i++)
	trace=trace+a[i][i];
   printf("\nSum of diagonal element=%d\n",trace);
}   
