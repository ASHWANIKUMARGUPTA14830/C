#include<stdio.h>
int main()
{
	int choice;
	int a,b,result;
	printf("Press 1 for add\n");
	printf("Press 2 for sub\n");
	printf("Press 3 for multiplication\n");
	printf("Enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("enter inputs=");
	    scanf("%d%d",&a,&b);
		result=a+b;
		printf("sum=%d",result);
		break;
		case 2:
			printf("enter inputs=");
	     scanf("%d%d",&a,&b);
		result=a-b;
		printf("sub=%d",result);
		break;
		case 3:
			printf("enter inputs=");
	scanf("%d%d",&a,&b);
		result=a*b;
		printf("mul=%d",result);
		break;
		default:
			printf("invalid choice");
		}
	return 0;
	
}
