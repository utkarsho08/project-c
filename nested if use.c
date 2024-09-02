//nested : use of if within if
# include <stdio.h>
	int main()
	{
		if('a')
		{
			if('b')
			{
				printf ("both are true \n");
			}
		}
	
//alternativerly it can be written as
		if('a' && 'b')
		{
			printf("bboth are true");
		}
	return 0;
	}	
