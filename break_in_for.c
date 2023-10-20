


#include<stdio.h>
int main()
{
	int n,i,sum=0;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&n);
		if(n<0)
		break;
		else
		sum=sum+n;
	}
	printf("sum=%d",sum);
	return 0;	
}
