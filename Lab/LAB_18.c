#include <stdio.h>
#define MaxSize 10
int Array(int A[MaxSize]);
int Array2 (int B[MaxSize]);
int Plusarray (int A[MaxSize],int B[MaxSize],int Sum[MaxSize]);

int main()
{
	int A[MaxSize],B[MaxSize],Sum[MaxSize];
	int exit;
do{
    printf("Array1\n");
    Array(A);
    
    printf("Array2\n");
    Array2(B);
    
    Plusarray(A,B,Sum);
    
	printf("\n if you want exit input 0 : ");
	scanf("%d",&exit);
  }
	while(exit != 0);
	printf("END\n");
	return 0;
}

int Array(int A[MaxSize])
{
    int i;
    for(i=0;i<MaxSize;i++)
		{
		    A[i] = 0;
			printf("Plese enter Array1[%d] = ", i);
			scanf("%d", &A[i]);
		}
}
int Array2 (int B[MaxSize])
{
    int i;
    for(i=0;i<MaxSize;i++)
			{
			    B[i] = 0;
				printf("Plese enter Array2[%d] = ", i);
				scanf("%d", &B[i]);
			}
}
int Plusarray (int A[MaxSize],int B[MaxSize],int Sum[MaxSize])
{
    int i;
    for(i=0;i<MaxSize;i++) //Plus All in Array A&B
		{
			Sum[i] = A[i] + B[i];
		}
		printf("relust Array Sum:\n"); //Print ArraySum
			for (i = 0; i<MaxSize; i++)
				{
      			printf("Array1[%d] = %d + Array2[%d] = %d = Sum[%d] = %d\n",i,A[i],i,B[i],i,Sum[i]);
                }
}