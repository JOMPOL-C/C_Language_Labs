#include "stdio.h"
#include "conio.h"
main()
{
	int radius, area;
	float PI=3.142;
	printf("Enter radius of circle :");
	scanf("%d",radius);
	area = PI * radius * radius ;
	printf("The area od circle is : %f\n",area);
	getch();
}