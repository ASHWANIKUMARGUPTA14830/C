
#include<stdio.h>
int main()
{
    int no;
    printf("enter any no");
	scanf("%d",&no);
	if(no%2==0 || no%5==0)
	printf("%d is divisible by either 2 or 5",no);
	else
	printf("%d is not divisible",no);
	return 0;
}




