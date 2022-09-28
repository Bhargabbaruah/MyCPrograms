#include<stdio.h>
int main()
{ 
     int m[3][3],i,j;


     for(i=0; i<3; i++)
     {
             for(j=0; j<3; j++)
	     {
	           printf("Input matrix[%d][%d]:", i+1, j+1);
                   scanf("%d",&m[i][j]);
             }
     }

     printf("\nThe inputed matrix is :\n");

     for(i=0;i<3; i++)
     {
	     for(j=0; j<3; j++)
	     {
		  printf("%4d", m[i][j]);
	     }
             printf("\n");
     }

     return 0;
}     

          





