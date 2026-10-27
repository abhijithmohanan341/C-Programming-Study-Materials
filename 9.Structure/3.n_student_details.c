// Write a C program using structure to read student details,
// calculate total marks, percentage and grade,
// search a student using roll number,
// and sort students based on total marks.

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
    }obj[50],temp;

    int n,i,flag=0,r,j;

    clrscr();

    printf("Enter Number of Students\n");
    scanf("%d",&n);

    printf("Enter Details\n");

    for(i=0;i<n;i++)
    {
        printf("\nEnter Roll No :: ");
        scanf("%d",&obj[i].rollno);

        printf("Enter Student Name :: ");
        scanf("%s",obj[i].name);

        printf("Enter Marks ::\n");
        scanf("%d%d%d",&obj[i].m1,&obj[i].m2,&obj[i].m3);

        obj[i].total=obj[i].m1+obj[i].m2+obj[i].m3;

        obj[i].per=(obj[i].total/300)*100;

        if(obj[i].per>90)
        {
            obj[i].grade='A';
        }
        else if(obj[i].per>80)
        {
            obj[i].grade='B';
        }
        else if(obj[i].per>70)
        {
            obj[i].grade='C';
        }
        else if(obj[i].per>60)
        {
            obj[i].grade='D';
        }
        else
        {
            obj[i].grade='E';
        }
    }

    printf("\nMark List\n");

    printf("Roll No\tName\tM1\tM2\tM3\tTotal\tPer\tGrade\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%.0f\t%.2f\t%c\n",
        obj[i].rollno,
        obj[i].name,
        obj[i].m1,
        obj[i].m2,
        obj[i].m3,
        obj[i].total,
        obj[i].per,
        obj[i].grade);
    }

    printf("\nEnter Roll Number to Search :: ");
    scanf("%d",&r);

    flag=0;

    for(i=0;i<n;i++)
    {
        if(obj[i].rollno==r)
        {
            flag=1;
            temp=obj[i];
            break;
        }
    }

    if(flag==1)
    {
        printf("\nRecord Found\n");

        printf("Roll No\tName\tM1\tM2\tM3\tTotal\tPer\tGrade\n");

        printf("%d\t%s\t%d\t%d\t%d\t%.0f\t%.2f\t%c\n",
        temp.rollno,
        temp.name,
        temp.m1,
        temp.m2,
        temp.m3,
        temp.total,
        temp.per,
        temp.grade);
    }
    else
    {
        printf("\nRecord Not Found\n");
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(obj[i].total<obj[j].total)
            {
                temp=obj[i];
                obj[i]=obj[j];
                obj[j]=temp;
            }
        }
    }

    printf("\nSorted Mark List\n");

    printf("Roll No\tName\tM1\tM2\tM3\tTotal\tPer\tGrade\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%.0f\t%.2f\t%c\n",
        obj[i].rollno,
        obj[i].name,
        obj[i].m1,
        obj[i].m2,
        obj[i].m3,
        obj[i].total,
        obj[i].per,
        obj[i].grade);
    }

    getch();
}

/*
Output:

Enter Number of Students
3

Enter Details

Enter Roll No :: 101
Enter Student Name :: Arun
Enter Marks ::
95
92
98

Enter Roll No :: 102
Enter Student Name :: Amal
Enter Marks ::
80
85
75

Enter Roll No :: 103
Enter Student Name :: Anu
Enter Marks ::
60
65
70

Mark List
Roll No Name    M1  M2  M3  Total   Per     Grade
101     Arun    95  92  98  285     95.00   A
102     Amal    80  85  75  240     80.00   C
103     Anu     60  65  70  195     65.00   D

Enter Roll Number to Search :: 102

Record Found
Roll No Name    M1  M2  M3  Total   Per     Grade
102     Amal    80  85  75  240     80.00   C

Sorted Mark List
Roll No Name    M1  M2  M3  Total   Per     Grade
101     Arun    95  92  98  285     95.00   A
102     Amal    80  85  75  240     80.00   C
103     Anu     60  65  70  195     65.00   D
*/