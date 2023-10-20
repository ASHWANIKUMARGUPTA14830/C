#include<stdio.h>
int main(){
    float cel ; // value of Celsius 
    printf("enter your temperature in celsius : \n");
    scanf("%f", &cel);
//scanf("%f",cel);
    float fer ; // value of  Fahrenheit
    fer = cel * 9/5 + 32;
    printf("your value in Fahrenheit \n");
    printf("%f",fer);
    float kel ; // value of kelvin
    kel = cel + 273.15;
    printf("\nyour value in kelvin\n");
    printf("%f",kel);
    return 0;
}