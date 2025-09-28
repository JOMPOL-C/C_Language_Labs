#include<stdio.h>
int main()
{
	int y[20];
	int *p;
	int i,j,k;
	int exit, sum=0 ;
	float avg;
	p = y;
do{
	for(i=0;i<20;i++)
		{
			y[i] = 0;	// scan
			printf("Plese enter Array[%d] = ", i);
			scanf("%d", &y[i]);
			printf("\n");
		}
	for(i=0;i<20;i++)
	{
		sum += *(p+i);
	}
	avg = sum / 20.0; // ????????????

	printf ("AVG=%.2f\n",avg);

	printf("\n if you want exit input 0 : ");
	scanf("%d",&exit);
}while(exit != 0);
	printf("END\n");
	return 0;
}