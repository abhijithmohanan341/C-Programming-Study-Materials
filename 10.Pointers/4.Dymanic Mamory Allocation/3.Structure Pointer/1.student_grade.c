// Write a C program using structure pointer to read student details,
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
	}*obj;

	clrscr();

	obj=(struct student*)malloc(sizeof(struct student));

	printf("Enter Roll Number ::\n");
	scanf("%d",&obj->roll);

	printf("Enter Name ::\n");
	scanf("%s",obj->name);

	printf("Enter Three Mark ::\n");
	scanf("%d%d%d",&obj->m1,&obj->m2,&obj->m3);

	obj->total=obj->m1+obj->m2+obj->m3;

	obj->per=(obj->total/300)*100;

	if(obj->per >90)
	{
		obj->grade='A';
	}
	else if(obj->per >80)
	{
		obj->grade='B';
	}
	else if(obj->per >70)
	{
		obj->grade='C';
	}
	else if(obj->per >60)
	{
		obj->grade='D';
	}
	else
	{
		obj->grade='E';
	}

	printf("\nMark List\n");

	printf("Roll :: %d\n",obj->roll);
	printf("Name :: %s\n",obj->name);
	printf("Total :: %f\n",obj->total);
	printf("Percentage :: %f\n",obj->per);
	printf("Grade :: %c\n",obj->grade);

	getch();
}

/*
Output:

Enter Roll Number ::
101
Enter Name ::
Abhi
Enter Three Mark ::
95 85 90

Mark List
Roll :: 101
Name :: Abhi
Total :: 270.000000
Percentage :: 90.000000
Grade :: B
*/