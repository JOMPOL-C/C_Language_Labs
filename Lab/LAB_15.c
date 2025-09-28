#include <stdio.h>
#define Max_size 3
int main()
{
	int A[Max_size][Max_size];
	int B[Max_size][Max_size];
	int C[Max_size][Max_size];
	int i,j;
	int count = 0 , sum = 0;
	int exit;
	float avg;

// ARRAY A
	for (i = 0; i < Max_size; i++)
	{
		for (j = 0; j < Max_size; j++)
		{
			printf("Please Enter Array: A[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
    }

    printf("\\\\\\\\\\\\\\\\\\\\\\\n");

// ARRAY B
	for (i = 0; i < Max_size; i++)
	{
		for (j = 0; j < Max_size; j++)
		{
			printf("Please Enter Array: B[%d][%d] = ", i, j);
			scanf("%d", &B[i][j]);
		}
    }
//multiplied  Array A&B
	for(i=0;i<Max_size;i++)
	{
		for (j = 0; j < Max_size; j++)
		{
			C[i][j] = A[i][j] * B[i][j];
			sum += C[i][j];
			count++;
		}
	}
// Array C
	for (i = 0; i < Max_size; i++)
	{
		for (j = 0; j < Max_size; j++)
		{
			printf("C[%d][%d] = %d\n",i,j,C[i][j],sum);
		}
    }

		avg = sum / count;
		printf ("AVG=%.2f\n",avg);
	return 0;
}