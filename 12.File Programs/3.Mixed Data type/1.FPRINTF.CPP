// Write a C program to read and write student details
// into a file using fprintf() and fscanf() functions.

#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *f1;

    int rollno;
    char name[50];
    float mark;

    int i,n;

    clrscr();

    f1=fopen("student.txt","w");

    printf("Enter No of Students :: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Roll Number :: ");
        scanf("%d",&rollno);

        printf("Enter Name :: ");
        scanf("%s",name);

        printf("Enter Mark :: ");
        scanf("%f",&mark);

        fprintf(f1,"%d %s %f\n",rollno,name,mark);
    }

    fclose(f1);

    f1=fopen("student.txt","r");

    printf("\nStudent Details\n\n");

    printf("Roll No\tName\tMark\n");

    while(fscanf(f1,"%d %s %f",&rollno,name,&mark)!=EOF)
    {
        printf("%d\t%s\t%.2f\n",rollno,name,mark);
    }

    fclose(f1);

    getch();
}

/*
Output:

Enter No of Students :: 3

Enter Roll Number :: 101
Enter Name :: Arun
Enter Mark :: 85.5

Enter Roll Number :: 102
Enter Name :: Amal
Enter Mark :: 90

Enter Roll Number :: 103
Enter Name :: Rahul
Enter Mark :: 78.5

Student Details

Roll No    Name    Mark
101        Arun    85.50
102        Amal    90.00
103        Rahul   78.50
*/