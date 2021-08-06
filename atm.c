#include<stdio.h>
#include<conio.h>
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

/*#include<stdio.h>

int main(){
	int a;
	double b;

	scanf("%d %lf",&a,&b);

	if(a%5!=0){
		printf("%0.2lf",b);
	}else if(a+0.5>b){
		printf("%0.2lf",b);
	}else{
		printf("%0.2lf",(b-a-0.5));
	}
	
	
	return 0;
}
*/
