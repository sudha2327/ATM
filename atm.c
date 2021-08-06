#include<stdio.h>

#include<stdlib.h>
int main(){
	int a;
	double b;
	printf("enter the withdraw amount:");
	scanf("%d",&a);
	printf("enter the full amount:");
	scanf("%lf",&b);
	
	if(a+0.50 <=b  && a%5==0){
		b=b-a;
		printf("subtraction successfully...\n");
		b-=0.50;
		printf("final amount is:%0.2lf",b);
	}else{
		printf("else part");
		printf("final amount is :%0.2lf",b);
	}
	
	
	
	return 0;
}

