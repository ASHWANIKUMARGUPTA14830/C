//Call by reference
#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter the values=");
	scanf("%d%d",&a,&b);
	printf("values before swapping\n");
	printf("a=%d\tb=%d\n",a,b);
	swap(&a,&b);
	printf("values after swapping\n");
	printf("a=%d\tb=%d\n",a,b);
}
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("values in function\n");
	printf("x=%d\ty=%d\n",*x,*y);
}
