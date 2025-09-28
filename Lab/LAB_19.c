#include <stdio.h>
#define Max_size 3
void Array1(int A[Max_size][Max_size]);
void Array2(int B[Max_size][Max_size]);
void Array3(int C[Max_size][Max_size]);
void MULTIPLY_ARRAY (int A[Max_size][Max_size],int B[Max_size][Max_size],int C[Max_size][Max_size]);
int main()
{
	int A[Max_size][Max_size];
	int B[Max_size][Max_size];
	int C[Max_size][Max_size];
	int sum = 0, count = 0;
	int i,j;
	float avg;

	Array1(A);
	Array2(B);
    MULTIPLY_ARRAY(A, B, C);

    for(int i = 0; i < Max_size; i++)
    {
        for(int j = 0; j < Max_size; j++)
        {
            sum += C[i][j];
            count++;
            printf("C[%d][%d] = %d\n", i, j, C[i][j]);
		}
    }

     Array3(C);

    if (count != 0)
    {
        avg = (float)sum / count;
        printf("AVG = %.2f\n", avg);
    }
	return 0;
}
void Array1(int A[Max_size][Max_size])
{
	int i,j;

	for (i = 0; i < Max_size; i++)
	{
		for (j = 0; j < Max_size; j++)
		{
			printf("Please Enter Array: A[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
    }
}

void Array2(int B[Max_size][Max_size])
{
	int i,j;

	for (i = 0; i < Max_size; i++)
	{
		for (j = 0; j < Max_size; j++)
		{
			printf("Please Enter Array: B[%d][%d] = ", i, j);
			scanf("%d", &B[i][j]);
		}
    }
}

void Array3(int C[Max_size][Max_size])
{
	int i,j;

		for (i = 0; i < Max_size; i++)
		{
			for (j = 0; j < Max_size; j++)
			{
				printf("C[%d][%d] = %d\n",i,j,C[i][j]);
			}
    	}
}

void MULTIPLY_ARRAY (int A[Max_size][Max_size],int B[Max_size][Max_size],int C[Max_size][Max_size])
{
	int i,j;

	for(i=0;i<Max_size;i++)
	{
		for (j = 0; j < Max_size; j++)
		{
			C[i][j] = A[i][j] * B[i][j];
		}
	}
}


