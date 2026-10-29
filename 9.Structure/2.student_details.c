// Write a C program using structure to read one student's details,
// calculate total marks, percentage and grade,
// and display the details in table format.

#include<stdio.h>
#include<conio.h>

void main()
{
    struct student
    {
        int rollno;
        char name[50];
        int m1,m2,m3;
        char grade;
        float total;
        float per;
    }obj;

    clrscr();

    printf("Enter Student Details\n");

    printf("\nEnter Roll No :: ");
    scanf("%d",&obj.rollno);

    printf("Enter Student Name :: ");
    scanf("%s",obj.name);

    printf("Enter Marks ::\n");
    scanf("%d%d%d",&obj.m1,&obj.m2,&obj.m3);

    obj.total=obj.m1+obj.m2+obj.m3;

    obj.per=(obj.total/300)*100;

    if(obj.per>90)
    {
        obj.grade='A';
    }
    else if(obj.per>80)
    {
        obj.grade='B';
    }
    else if(obj.per>70)
    {
        obj.grade='C';
    }
    else if(obj.per>60)
    {
        obj.grade='D';
    }
    else
    {
        obj.grade='E';
    }

    printf("\nStudent Mark List\n");

    printf("\nRoll No\tName\tM1\tM2\tM3\tTotal\tPer\tGrade\n");

    printf("%d\t%s\t%d\t%d\t%d\t%.0f\t%.2f\t%c\n",
    obj.rollno,
    obj.name,
    obj.m1,
    obj.m2,
    obj.m3,
    obj.total,
    obj.per,
    obj.grade);

    getch();
}

/*
Output:

Enter Student Details

Enter Roll No :: 101
Enter Student Name :: Arun
Enter Marks ::
95
92
98

Student Mark List

Roll No Name    M1  M2  M3  Total   Per     Grade
101     Arun    95  92  98  285     95.00   A
*/