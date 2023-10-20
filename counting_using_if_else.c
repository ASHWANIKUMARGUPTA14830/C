
#include<stdio.h>
int main()
{
	int n,i,counto=0,counte=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%2==0)
	counte=counte+1;
	else
	counto++;
	}
	printf("count of even roll no=%d",counte);
	printf("count of odd roll no=%d",counto);
	return 0;	
}



