#include <stdio.h>
#define MaxSize 10
int main()
{
	int A[MaxSize],B[MaxSize],Sum[MaxSize];
	int i;
	int exit;
do{
printf("IS Array1 :\n");

		for(i=0;i<MaxSize;i++)
		{
			A[i] = 0;	// scan ArrayA
			printf("Plese enter Array1[%d] = ", i);
			scanf("%d", &A[i]);
			printf("\n");
		}

printf("IS Array2 :\n");

			for(i=0;i<MaxSize;i++)
			{
				B[i] = 0;	// scan ArrayB
				printf("Plese enter Array2[%d] = ", i);
				scanf("%d", &B[i]);
				printf("\n");
			}
					for(i=0;i<MaxSize;i++) //Plus All in Array A&B
					{
						Sum[i] = A[i] + B[i];
					}
						 printf("relust Array Sum:\n"); //Print ArraySum
						 for (i = 0; i<MaxSize; i++)
						 {
      				  	 	printf("Array1[%d] = %d + Array2[%d] = %d = Sum[%d] = %d\n",i,A[i],i,B[i],i,Sum[i]);
						 }
	printf("\n if you want exit input 0 : ");
	scanf("%d",&exit);
  }
	while(exit != 0);
	printf("END\n");
	return 0;
}