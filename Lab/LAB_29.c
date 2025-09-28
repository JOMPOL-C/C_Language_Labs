#include<stdio.h>
int main()
{
	int y[3][3][3];
	int *p;
	int i , j , k ;
	int exit, sum=0;
	p = y;
do{
	printf ("Array 3D\n");
		for(i=0;i < 3; i++)
		{
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
				{
					y[i][j][k] = i+j+k;
					printf("B[%d][%d][%d]=%d\n",i,j,k,y[i][j][k]);
				}
			}
		 }

	for(i=0;i<27;i++)
	{
		sum += *(p+i);
	}
	printf ("SUM=%d\n",sum);

	printf("\n if you want exit input 0 : ");
	scanf("%d",&exit);

}while(exit != 0);
	printf("END\n");
	return 0;
}