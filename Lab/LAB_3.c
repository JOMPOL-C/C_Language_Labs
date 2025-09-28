#include <stdio.h>
#include <conio.h>
main()
{
    char a, b, c, d, e;
	char wait;
	int exit;
	int num;
do{
	num = 0; // ??????????? DO ??????????????????????????????

	printf("Please input your letter\n"); // input

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

	printf("\n Your input: \n");
	printf("%c\n",a);
	printf("%c\n",b);
	printf("%c\n",c);
	printf("%c\n",d);
    printf("%c\n",e);

	while (num < 5){
		while (a > b){
			wait = a;
			a = b;
			b = wait;
		}
		while (b > c){
			wait = b;
			b = c;
			c = wait;
			}
		while (c > d){
			wait = c;
			c = d;
			d = wait;
		}
		while (d > e){
			wait = d;
			d = e;
			e = wait;

		}
		num++; // ?????? num ??????????????????????????
}
	while (a < b){
	printf("\n switch : \n");
	printf("%c\n",a);
	printf("%c\n",b);
	printf("%c\n",c);
	printf("%c\n",d);
    printf("%c\n",e);
    break;
}
	printf("\n if you want exit input 0 : ");
	scanf("%d",&exit);

	}while(exit != 0);
	printf("END\n");
    return 0;
}