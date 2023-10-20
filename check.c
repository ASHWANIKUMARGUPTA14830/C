#include<stdio.h>
int main(){
    int n2[] = {2,3,5,6};
    int mer ;
    mer = sizeof(n2)/sizeof(n2[0]);
    printf("%d",mer);
    return 0;
    
}