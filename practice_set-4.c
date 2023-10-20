#include<stdio.h>
int main(){
    float p; // value of principal to use to find simple intrest
    scanf("%f",&p);
    float roi; // value of rate of intrest to find simple intrest
    scanf("%f",&roi);
    float t; // value of time duration in years
    scanf("%f",&t);
    float si;
    si = (p*roi*t)/100;
    printf("%f",si);
    return 0;

}