#include <stdio.h>
int main(){
	int n;
	printf("enter a number to chenck it's sign");
	scanf("%d",&n);
	if (n>0){
		printf("possitive");
	}
	else if ( n<0){
		printf("negative");
	}
	else{
		printf("zero");
	}
}
