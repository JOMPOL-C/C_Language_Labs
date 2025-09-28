#include <stdio.h>
#include <conio.h>

int main()
{
    char a, b, c, d, e;
	char wait;
	int cnt,exit;
do{
	printf("Please input your letter\n");

	printf("letter 1: ");
	a = getch();
	printf("%c\n",a);

	printf("letter 2: ");
	b = getch();
	printf("%c\n",b);

	printf("letter 3: ");
	c = getch();
	printf("%c\n",c);

	printf("letter 4: ");
	d = getch();
	printf("%c\n",d);

	printf("letter 5: ");
	e = getch();
    printf("%c\n",e);

    printf("Your character : %c %c %c %c %c \n",a,b,c,d,e);

	for(cnt = 1; cnt <= 4; cnt++){ // loop

	if (a > b){
			wait = a;
			a = b;
			b = wait;
}
	if (b > c){
			wait = b;
			b = c;
			c = wait;
}
	if (c > d){
			wait = c;
			c = d;
			d = wait;
}
	if (d > e){
			wait = d;
			d = e;
			e = wait;
}
}
	printf("New Your character : %c %c %c %c %c \n",a,b,c,d,e);

	printf("\n if you want exit input 0 : ");
	scanf("%d",&exit);

}while(exit != 0);
	printf("END\n");
    return 0;
}