#include<stdio.h>
int main(){
    float rad;
    printf("enter your radius:\n");
    scanf("%f",&rad);
    float area;
    area = 3.14*rad*rad;
    printf("area of circle is %f",area);
    float hei;
    printf("enter your height");
    scanf("%f",&hei);
    float volume = 3.14 *rad*rad*hei;
    printf("%f",volume);
    return 0;
}

