#include <stdio.h>
int add(int num1,int num2){
	int x;
	x = num1+num2;
	printf("\nsum of numenbr is: %d",x);
}
int main(){
	int num1,num2;
	printf("enter num1: ");
	scanf("%d",&num1);
	printf("\nenter num2: ");
	scanf("%d",&num2);
	add(num1,num2);
}

