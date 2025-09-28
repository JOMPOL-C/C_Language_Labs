#include "stdio.h"
main ( )
{
	float speed;
	int exit;
do{
	printf ("Plese Input Your Speed :");
	scanf ("%f",&speed);

	if (speed < 1.00 && speed > -0.01){
		printf ("Calm\n");
}

	else if (speed >= 1.00 && speed < 4){
		printf ("Light Air\n");
}

	else if(speed >= 4.00 && speed < 28){
		printf ("Breeze\n");
}

	else if(speed >= 28.00 && speed < 48){
		printf ("Gale\n");
}

	else if(speed >= 48.00 && speed <= 63.00){
		printf ("Storm\n");
}

	else if(speed > 63.00){
		printf ("Hurricane\n");
}

	else{
		printf ("ERROR\n");
}
	printf("\n if you want exit input 0 : ");
	scanf("%d",&exit);

}while(exit != 0);
	printf("END\n");
return 0;\
}