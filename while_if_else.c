
#include<stdio.h>
int main()
{
	int n,a,rev=0,t;
	printf("enter n=");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		a=n%10;
		rev=rev*10+a;
		n=n/10;
	}
	printf("reverse=%d\n",rev);
	if(t==rev)
	printf("no is palindrome");
	else
	printf("not a palindrome");
	return 0;	
}

