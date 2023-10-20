#include<stdio.h>
int main()
{
	int a=5;
	int *p=&a;
	printf("%d\n",a);// Value of a
	printf("%d\n",p);//value of p i.e. address of a
	printf("%d\n",&a);//Address of a
	printf("%d\n",&p);//Address of p
	printf("%d\n",*p);// Value at address which pointer variable holds
	*p=20;
	printf("%d\n",a);
	printf("%d\n",*p);
	return 0;
} 
