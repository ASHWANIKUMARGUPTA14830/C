/*
#include <stdio.h>
    int main()
    {
        int i = -3;
        int k = i % 2;
        printf("%d\n", k);
        return 0;
    }
ans = -1;
*/

/*
#include <stdio.h>
    int main()
    {
        int i = 3;
        int l = i / -2;
        int k = i % -2;
        printf("%d %d\n", l, k);
        return 0;
    }
ans = -1,1;
 
 */
 /*
     #include <stdio.h>
    int main()
    {
        int x = 5 * 9 / 3 + 9;
        printf("%d",x);
        return 0;
    }
ans = 24;
*/
/*
    #include <stdio.h>
    int main()
    {
        int x = 5.3 % 2;
        printf("Value of x is %d", x);
        return 0;
    }
ans = compiler time error;
*/
/*
    #include <stdio.h>
    int main()
    {
        int a = 10;
        double b = 5.6;
        int c;
        c = a + b;
        printf("%d", c);
        return 0;
    }
ans = 15;
*/
/*
#include <stdio.h>

int main() {
    int a = 10;
    printf("%d\n",a);
    int t;
	t = a++;
    
    printf("%d\n", a);
    printf("%d",t);
    
    return 0;
}
ans = 10 
      11
      10
*/
/*
#include <stdio.h>
    int main()
    {
        int a=1,b=1,c;
        c = a++ + b;
        printf("%d,%d,%d", a,b,c);
        return 0;
    }
ans = 2,1,2;
*/
/*
#include <stdio.h>
    int main()
    {
        int d, a = 1, b = 2;
        d =  a++ + ++b;
        printf("%d %d %d", d, a, b);
        return 0;
    }
ans = 4 , 2 , 3; 
*/
/*
#include <stdio.h>
    int main()
    {
        int i = 0;
        int x = i++;
        int y = ++i;
        printf("%d % d\n", x, y);
        return 0;
    }
ans = 0 , 2;
*/
/*
   #include <stdio.h>
    int main()
    {
        int x = 4, y, z;
        y = --x;
        z = x--;
        printf("%d%d%d", x,  y, z);
        return 0;
    }
ans = 2, 3, 3;
*/
/*
#include <stdio.h>
    int main()
    {
        int a=1,b=2,c;
        c=a>b;
        printf("\n%d",c);
        return 0;
    }
ans = 0;
*/
/*
#include <stdio.h>
    int main()
    {
        int a=1,b=2;
        printf("\n%d",a!=b);
        return 0;
    }
ans =  1;
*/
/*

    #include <stdio.h>
    int main()
    {
        int a = 10, b = 5, c = 5;
        int d;
        d = b + c == a;
        printf("%d", d);
        return 0;
    }
ans = 1;
*/
/*

    #include <stdio.h>
    int main()
    {
        int a = 10, b = 0,c;
        c=a&&b;
        printf("%d",c);
    }
ans = 0;
*/
/*
#include <stdio.h>
    int main()
    {
        int a = 10, b = 0,c=2,d;
        d=a&&b||c-2;
        printf("%d",d);
    }
ans = 0;
*/
/*
    #include <stdio.h>
    int main()
    {
        int x = 1, y = 0, z = 5;
        int a = x && y || z++;
        printf("%d%d",a, z);
        return 0;
    }
    ans =1 , 6; 
*/
/*

    #include <stdio.h>
    int main()
    {
        int x = 1, y = 0, z = 5;
        int a = x && y && z++;
        printf("%d%d",a, z);
        return 0;
    }
ans 
a=0
z = 5
because according to and crash property when both condition is false then that operation will be crash and dont do any work
*/
/*

#include<stdio.h>
int main()
{
int a=5,b=6;
printf("%d",a&b);
return 0;
}
*/
/*
#include <stdio.h>

int main() {
    unsigned int a = 5;  // 00001010 in binary
    unsigned int b = 5;  // 00000101 in binary

    // Bitwise AND
    unsigned int result_and = a & b;
    printf("Bitwise AND: 0x%02X\n", result_and);

    // Bitwise OR
    unsigned int result_or = a | b;
    printf("Bitwise OR: 0x%02X\n", result_or);

    // Bitwise XOR
    unsigned int result_xor = a ^ b;
    printf("Bitwise XOR: 0x%02X\n", result_xor);

    // Bitwise NOT
    unsigned int result_not = ~a;
    printf("Bitwise NOT of a: 0x%02X\n", result_not);

    // Left shift
    unsigned int result_left_shift = a << 2;
    printf("Left shift of a: 0x%02X\n", result_left_shift);

    // Right shift
    unsigned int result_right_shift = a >> 2;
    printf("Right shift of a: 0x%02X\n", result_right_shift);

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // skip the remaining code for i = 3
        }
        printf("%d\n", i);
    }

    printf("Loop completed.\n");
    return 0;
}
*/
/*
#include<stdio.h>
void my_recursive_function(int n)
{
    if(n == 0)
    return;
    printf("%d ",n);
    my_recursive_function(n-1);
}
int main()
{
    my_recursive_function(5);
    return 0;
}
*/
/*
    #include <stdio.h>
    int x;
    void m();
    int main()
    {
        m();
        printf("%d", x);
        return 0;
    }
    void m()
    {
        x = 4;
    }
*/
/*
    #include <stdio.h>
    int x = 5;
    void m();
    void n();
    int main()
    {
        int x = 3;
        m();
        printf("%d", x);
        return 0;
    }
    void m()
    {
        x = 8;
        n();
    }
    void n()
    {
        printf("%d", x);
    }
*/
/*
#include <stdio.h>
    int main()
    {
        int x=1;
        {
            x=2;
            {
                int x=3;
            }
        }
        printf("%d",x);
        return 0;
    }
*/
/*
#include<stdio.h>
int incr(int i)
{
   static int count = 0;
   count = count + i;
   return (count);
}
int main()
{
   int i,j;
   for (i = 0; i <=2; i++)
      j = incr(i);
      printf("%d",j);
return 0;
}
*/
/*
#include<stdio.h>
void update();
int main()
{
update();
update();
return 0;
}
void update()
{
    auto int a=1;
    static int b=1;
    a++;
    b++;
    printf("%d,%d\n",a,b);
}
*/
/*
#include<stdio.h>
int main()
{
float x=12.6784;
printf("%.3f",x);
return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
double x=3.456;
printf("%lf",floor(x));
return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
double x=3.001;
printf("%lf",ceil(x));
return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
double x=10.0,y=7.0;
printf("%lf",fmod(x,y));
return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
int x;
x=printf("ABCD");
printf(" %d",x);
return 0;
}
ans = ABCD 4;
*/
/*
#include <stdio.h>

int main() {
    int num = 10;       // Variable 'num' with value 10
    int* ptr = &num;    // Pointer 'ptr' pointing to the address of 'num'

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
	int ch=1;
	//scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("1");
			break;
			default:
				printf("2");
				break;
			}
			return 0;
	}
//	ans = 1;
*/
/*
#include <stdio.h>

int main() {
    int num = 10;       // Variable 'num' with value 10
    int* p = &num;    // Pointer 'p' pointing to the address of 'num'

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", p);
    printf("Value pointed by ptr: %d\n", *p);

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int o = 42;  // Variable o with value 42
    int* a = &o; // Pointer a pointing to the address of o

    int result1 = *&o;  // Equivalent to o
    int result2 = &*a;  // Equivalent to a

    printf("Value of o: %d\n", o);
    printf("Value of result1: %d\n", result1);
    printf("Value of result2: %p\n", result2);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{ 
int a[3][3], i, j;
for(i=0; i<3; i++)
{ // for loop for rows
 for(j=0; j<3;j++)
	{ // for loop for columns
  printf(“enter the value of a[%d][%d]: ”, i, j);
  scanf(“%d”, &a[i][j]);
	} //end for columns
} //end for rows
printf(“elements of 2D matrix are”);
for(i=0; i<3; i++)
{ 
 for(j=0;j<3;j++)
 	{
   print(“%d\t”, a[i][j]);
 	}	//end for
 printf(“\n”);
} //end for
return 0;
} //end main
*/
