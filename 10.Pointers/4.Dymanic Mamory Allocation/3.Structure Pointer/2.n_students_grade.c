// Write a C program using structure pointers to read N students' details,
// calculate total, percentage and grade, and display the mark list.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void main()
{
	struct student
	{
		int roll;
		char name[50];
		int m1,m2,m3;
		float total;
		float per;
		char grade;
	}*obj[50];

	int n,i;

	clrscr();

	printf("Enter the number of students ::\n");
	scanf("%d",&n);

	printf("Student Details\n");
	printf("--------------------\n");

	for(i=0;i<n;i++)
	{
		obj[i]=(struct student*)malloc(sizeof(struct student));

		printf("Enter Roll Number ::\n");
		scanf("%d",&obj[i]->roll);

		printf("Enter Name ::\n");
		scanf("%s",obj[i]->name);

		printf("Enter Three Mark ::\n");
		scanf("%d%d%d",&obj[i]->m1,&obj[i]->m2,&obj[i]->m3);

		obj[i]->total=obj[i]->m1+obj[i]->m2+obj[i]->m3;

		obj[i]->per=(obj[i]->total/300)*100;

		if(obj[i]->per >90)
		{
			obj[i]->grade='A';
		}
		else if(obj[i]->per >80)
		{
			obj[i]->grade='B';
		}
		else if(obj[i]->per >70)
		{
			obj[i]->grade='C';
		}
		else if(obj[i]->per >60)
		{
			obj[i]->grade='D';
		}
		else
		{
			obj[i]->grade='E';
		}
	}

	printf("\nMark List\n");
	printf("\nRollno\tName\tTotal\tPercentage\tGrade\n");

	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%.2f\t%.2f\t%c\n",
		obj[i]->roll,obj[i]->name,
		obj[i]->total,obj[i]->per,obj[i]->grade);
	}

	getch();
}

/*
Output:

Enter the number of students ::
2
Student Details
--------------------
Enter Roll Number ::
101
Enter Name ::
Abhi
Enter Three Mark ::
95 85 90
Enter Roll Number ::
102
Enter Name ::
Anu
Enter Three Mark ::
70 75 80

Mark List

Rollno  Name    Total   Percentage      Grade

101     Abhi    270.00  90.00           B
102     Anu     225.00  75.00           C
*/