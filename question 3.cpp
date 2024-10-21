#include  <stdio.h>

int pc(int n){
	int f;
	for (int i =1; i <=n;i++ ){
		if (n%i==0){
		f+=1;
		}
	}
	if (f ==2){
		printf("\nprime");
	}
	else{
		printf("\ncomposite");
	}
}
int main(){
	int n;
	printf("\nenter the number: ");
	scanf("%d",&n);
	pc(n);
}
