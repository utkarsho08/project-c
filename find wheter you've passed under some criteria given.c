/* To find whether a student has passed or failed.
 * Conditions : requires a total of 40% and at least 33% in each subject.
 * Assumptions : 3 subjects marks to be assumed.
 * take input of marks from the user.
 */
 
# include <stdio.h>
int main () 
	{
		float m1,m2,m3 ;
		
		printf ("Enter your marks in Subject 1: \n");
		scanf ("%f", & m1);
		
		printf ("Enter your marks in Subject 2: \n");
		scanf ("%f", & m2);
		
		printf ("Enter your marks in Subject 3: \n");
		scanf ("%f", & m3);

		printf ("Your marks are %.2f in Subject 1, %.2f in Subject 2 and %.2f in Subject 3. \n",m1,m2,m3);
			
			if (m1 < 33 || m2 < 33 || m3 < 33)
			{ printf ("Sorry,you've failed due to (less marks than 33 in an individual or multiple subjects criteria.) \n");
				}
			
			else if ( (m1 + m2 + m3)/3 < 40 ) 
			{ printf ("Sorry,you have failed due to less percentage. \n");
				}			
			else
			{ printf ("Congratulations, you've passed. \n");
				}
				return 0;
		}
