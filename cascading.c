
//Cascading
#include<stdio.h>
void sum();//Func Prototype
void digits();
int main()
{
sum();//Function call
return 0;
}
void sum()//Function Definition
{
int a,b,s;
printf("enter the values=");
scanf("%d%d",&a,&b);
s=a+b;
printf("sum=%d\n",s);
digits();
}
void digits()
{
	int n,i,sum=0;
	printf("enter n=");
	scanf("%d",&n);
	while(n!=0)
	{
		i=n%10;
		sum=sum+i;
		n=n/10;
	}
printf("sum of digits=%d",sum);
}
