#include <stdio.h>
#include<math.h>
int pow_num(int x,int y){
	int n;
	n=pow(x,y);
	printf("tne power id %d",n);
}
int main(){
	int x,y;
	printf("enter num1: ");
	scanf("%d",&x);
	printf("enter num2: ");
	scanf("%d",&y);
	pow_num(x,y);
}
