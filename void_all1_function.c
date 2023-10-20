//No return type no arguments
#include<stdio.h>
void avg();//Func Prototype
int main()
{
avg();//Function call
return 0;
}
void avg()//Function Definition
{
float m1,m2,m3,m4,m5,sum,a;
printf("enter the values=");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
a=sum/5;
printf("average=%.2f",a);

}
//No return type with arguments
#include<stdio.h>
void avg(float,float,float,float,float);//Func Prototype
int main()
{
float m1,m2,m3,m4,m5;
printf("enter the values=");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
avg(m1,m2,m3,m4,m5);//Function call
return 0;
}
void avg(float m1,float m2,float m3,float m4,float m5)//Function Definition
{
float sum,a;
sum=m1+m2+m3+m4+m5;
a=sum/5;
printf("average=%.2f",a);
}


//with return type no arguments
#include<stdio.h>
float avg();//Func Prototype
int main()
{
/*float r;
r=avg();//Function call
printf("average=%.2f",r);*/
printf("average=%.2f",avg());
return 0;
}
float avg()//Function Definition
{
float m1,m2,m3,m4,m5,sum,a;
printf("enter the values=");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
a=sum/5;
//printf("average=%.2f",a);
return a;
}


//with RT with Arg
#include<stdio.h>
float avg(float,float,float,float,float);//Func Prototype
int main()
{
float m1,m2,m3,m4,m5;
printf("enter the values=");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
printf("average=%.2f",avg(m1,m2,m3,m4,m5));//Function call
return 0;
}
float avg(float m1,float m2,float m3,float m4,float m5)//Function Definition
{
float sum,a;
sum=m1+m2+m3+m4+m5;
a=sum/5;
//printf("average=%.2f",a);
return a;
}


//Call by value
#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("enter the values=");
	scanf("%d%d",&a,&b);
	printf("values before swapping\n");
	printf("a=%d\tb=%d\n",a,b);
	swap(a,b);
	printf("values after swapping\n");
	printf("a=%d\tb=%d\n",a,b);
}
void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("values in function\n");
	printf("x=%d\ty=%d\n",x,y);
}

