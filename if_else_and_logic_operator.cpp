
#include<stdio.h>
int main()
{
    int no;
    printf("enter any no");
	scanf("%d",&no);
	if(no%2==0 && no%5==0)
	printf("%d is divisible by both",no);
	else
	printf("%d is not divisible by both",no);
	return 0;
}
