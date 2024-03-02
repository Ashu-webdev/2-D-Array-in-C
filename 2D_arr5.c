/* To multiply two matrices*/
#include<stdio.h>
#include<stdlib.h>
int main()
{   int mat1[10][10],mat2[10][10],prod[10][10],i,j,r1,c1,r2,c2,k;
    printf("Enter size of matrix1:");
    scanf("%d%d",&r1,&c1);
    printf("Enter size of matrix2:");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2) 
    {  printf("\n Matrix multiplication is not possible");
       exit(0);
    }

    printf("Enter %d elements of matrix1\n",r1*c1);
    for(i=0;i<r1;i++)
    {
      for (j=0;j<c1;j++)
          scanf("%d",&mat1[i][j]);
    }
    printf("Elements of matrix1 are\n");
    for(i=0;i<r1;i++)
    {
     for (j=0;j<c1;j++)
       printf("%d\t",mat1[i][j]);
    }

    printf("\nEnter %d elemets of matrix2\n",r2*c2);
    for(i=0;i<r2;i++)
    {
      for(j=0;j<c2;j++)
        scanf("%d",&mat2[i][j]);
    }  
    printf("Elements of matrix2 are\n");
    for (i=0;i<r2;i++)
    {
	    for (j=0;j<c2;j++)
		    printf("%d\t",mat2[i][j]);
   }	    
	     
    for (i=0;i<r1;i++)
    {
	for(j=0;j<c2;j++)
	{
	   prod[i][j]=0;
           for(k=0;k<c1;k++)
	     prod[i][j]=prod[i][j]+mat1[i][j]+mat2[i][j];
        }
    }
   printf("\nProduct matrix is\n");
   for(i=0;i<r1;i++)
   { 
	for (j=0;j<c2;j++)
		printf("%d\t",prod[i][j]);
   printf("\n");
   }
}   

 	   
