#include<stdio.h>
int main()
{
 char another ; 
 int a,b,choice;
 do
 {
 	printf("Press 1 for add\n");
 	printf("Press 2 for sub\n");
 	printf("enter choice=");
 	scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("enter values");
		scanf("%d%d",&a,&b);
		printf("sum=%d",a+b);
		break;
	case 2:printf("enter values");
		scanf("%d%d",&a,&b);
		printf("sub=%d",a-b);
		break;
}
printf ( "\nWant to enter another number y/n " ) ;
scanf (" %c", &another ) ;
} while( another == 'y'||another=='Y' ) ;

return 0;
}


