#include <stdio.h>
int main(){
	//to print the simple interest of a amount in t years
	float p,t;
	int r;
	printf("Principal Amount given: ");
	scanf("%f", & p);
	printf("Interest Rate given: ");
	scanf("%d", & r);
	printf("Time given: ");
	scanf("%f", & t);
	printf("The Simple Interest for time %f is %f" , t, ((p*r*t)/100));
	return 0;
	}
