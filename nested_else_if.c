


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
	
	if(choice==1)
	{
		printf("enter inputs=");
	    scanf("%d%d",&a,&b);
		result=a+b;
		printf("sum=%d",result);
	}
	else if(choice==2)
	{
	printf("enter inputs=");
	scanf("%d%d",&a,&b);
		result=a-b;
		printf("sub=%d",result);
	}
	else if(choice==3)
	{   printf("enter inputs=");
	scanf("%d%d",&a,&b);
		result=a*b;
		printf("mul=%d",result);
	
	}
	else
	printf("invalid choice");
	return 0;
	
}


