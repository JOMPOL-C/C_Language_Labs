#include "stdio.h"
main ( )
{
	float speed;
	int exit;
do{
	printf ("Plese Input Your Speed :");
	scanf ("%f",&speed);


	while(speed < 1.00 && speed > 0.01){
		printf ("Calm");
	break ;
}

	while(speed >= 1.00 && speed < 4){
		printf ("Light Air");
	break ;
}

	while(speed >= 4.00 && speed < 28){
		printf ("Breeze");
	break ;
}

	while(speed >= 28.00 && speed < 48){
		printf ("Gale");
	break ;
}

	while(speed >= 48.00 && speed <= 63.00){
		printf ("Storm");
	break ;
}

	while(speed > 63.00){
		printf ("Hurricane");
	break ;
}

	while(speed < 0.00){
			printf ("ERROR");
	break ;
}
	printf("\n if you want exit input 0 : ");
	scanf("%d",&exit);

}while(exit != 0);
	printf("END\n");
	return 0;
}