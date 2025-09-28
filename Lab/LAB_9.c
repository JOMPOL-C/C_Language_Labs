#include <stdio.h>

int factorial(int Number);
int Checknumber(int Number);

int main()
{
   int choice;
   int exit;
do{
	do{
   printf("Chosse a function to use\n");
   printf("1. factorial\n");
   printf("2. checknumber even&odd \n");
   printf("Please Enter function 1-2 :");
   scanf("%d",&choice);

   if (choice == 1)
   {
       int Number;
       printf("Enter You Number: ");
       scanf("%d",&Number);
        if (Number < 0)
        {
            printf("not defined for negative number\n");
        }
        else
        {
            printf("factorial of %d is %d\n",Number,factorial(Number));
        }
   }
   else if (choice == 2)
   {
       int Number;
       printf("Please Enter Number : ");
       scanf("%d",&Number);
       Checknumber(Number);
   }
   else
   {
       printf("Please chosse number 1-2\n\n");
       printf("/////////////////////////////////\n\n");
   }
}while (choice != 1 && choice != 2);

	printf("\n if you want exit input 0 : ");
		scanf("%d",&exit);
   }while(exit != 0);
		printf("END\n");

return 0;
}

int factorial(int Number)
{
    if (Number == 0)
    {
        return 0;
    }
    else
    {
		int result = 1;
		int i;
        for(i = 1;i <= Number;i++)
        {
			result *= i;
		}
		return result;
    }
}

int Checknumber(int Number)
{
    if (Number == 0 )
    {
        printf("%d is not odd and not even\n",Number);
    }
    else if (Number % 2 == 0)
    {
		printf("%d is even\n",Number);
	}
    else
    {
        printf("%d is odd\n",Number);
    }
}