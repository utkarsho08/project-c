// a program that confirms whether you are eligible to drive.
// if, else if ladder.

#include <stdio.h>
int main()
{
	int age=18;
	printf("Enter your age: ");
	scanf("%d", & age);
	
	if(age==18)
	{
		printf("You are eligible to drive, drive safely.");
	}
	else if(age<18)
	{
		printf("You are a minor, fuck off!");
	}
	else if(age>=18 && age<=60)
	{
		printf("Happy Journey!!");
	}
	else
		printf("Senior citizens are requested to drive only when accompanied or in good health,drive safely.");
	return 0;	
}
