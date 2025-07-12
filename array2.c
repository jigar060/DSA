#include <stdio.h>

int main() {
  int marks[10];
  printf("Enter upto 10 studet's marks");
  for(int i=0;i<=9;i++)
    {
     scanf("%d",&marks[i]);
    }
  int GradeA=0, GradeB=0, GradeC=0, GradeD=0,Trail=0, invalidMarks=0;
  
    for(int i=0;i<10;i++)
	{
		if(marks[i]>=81 && marks[i]<=100)
		{
		    GradeA++;
		}
		else if(marks[i]>=61 && marks[i]<=80)
		{
		    GradeB++;
		}
		else if(marks[i]>=50 && marks[i]<=60)
		{
		    GradeC++;
		}
		else if(marks[i]>=35 && marks[i]<=49) 
		{
		    GradeD++;
		}
		else if(marks[i]>=0 && marks[i]<=34)
		{
		    Trail++;
		}
		else {
		     invalidMarks++;
		    }
		    
		}
	printf("Number of Grade A students = %d\n", GradeA);
	printf("Number of Grade B students = %d\n", GradeB);
	printf("Number of Grade C students = %d\n", GradeC);
	printf("Number of Grade D students = %d\n", GradeD);
	printf("Number of fail students = %d\n", Trail);
	printf("Number of invalid entries = %d\n", invalidMarks);
    return 0;
}
