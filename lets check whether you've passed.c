// A program to find grade of a student given his marks based on some criteria.

# include <stdio.h>
	int main (){
		
		/* 90-100 : A
		 * 80-90 : B
		 * 70-80 : C
		 * 60-70 : D
		 * 50-60 : E
		 * < 50 : F
		 */
		
		float marks; 
		char grade;
		
		printf ("Enter your marks: ");
		scanf ("%f", & marks);
		
		if (marks <=100 && marks >=90){
		grade = 'A';
		}
		
		else if (marks <=90 && marks >=80){
		grade = 'B';
		}
		
		else if (marks <=80 && marks >=70){
		grade = 'C';
		}
		
		else if (marks <=70 && marks >=60){
		grade = 'D';
		}
		
		else if (marks <=60 && marks >=50){
		grade = 'E';
		}
		
		else{ 
			grade = 'F';
		
		}
		printf ("Your grade is: %c \n",grade);
		
			return 0;
}
