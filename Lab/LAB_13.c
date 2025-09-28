#include <stdio.h>
#define Max_size 10
int main()
{
	int exit;
	int A[Max_size][Max_size];
	int B[Max_size][Max_size][Max_size];
	int i,j,k;
	int n;
	
		do{
		    do{
		    printf("Enter you Num :");
		    scanf("%d",&n);
		    if(n > Max_size)
		    {
		        printf("Please reduce numbers.\n");
		    }
		      }while(n > Max_size);
// Array A 2D
        printf ("Array 2D\n");
			for(i=0;i < n; i++)
			{
				for(j=0;j<n;j++)
				{
					A[i][j] = 0;
					printf("A[%d][%d]=%d\n",i,j,A[i][j]);
				}
			}
// Array B 3D
                printf ("Array 3D\n");
					for(i=0;i < n; i++)
					{
						for(j=0;j<n;j++)
						{
							for(k=0;k<n;k++)
							{
								B[i][j][k] = 0;
								printf("B[%d][%d][%d]=%d\n",i,j,k,B[i][j][k]);
							}
						}
					}


				printf("\n if you want exit input 0 : ");
				scanf("%d",&exit);
		   }
		   while(exit != 0);
			printf("END\n");
    		return 0;
}