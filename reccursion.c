#include<stdio.h>
void ashwani(int n);
int main(){
	ashwani(7);
	return 0;

}
void ashwani(int n){
	//if(n==0){
	//	return n;
	//}
	printf("hello swaraj its your 2nd name\n");
	ashwani(n-1);
}

