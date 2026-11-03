// Write a C program to store and retrieve employee details
// using structure and fwrite() and fread() functions.

#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>

void main()
{
    FILE *f1;

    struct employee
    {
        char name[50];
        int age;
        int salary;
    }e;

    int i,n;

    clrscr();

    f1=fopen("emp.txt","w");

    printf("Enter number of employees :: ");
    scanf("%d",&n);

    printf("\nEnter Details\n");

    for(i=0;i<n;i++)
    {
        printf("\nEnter name :: \n");
        scanf("%s",e.name);

        printf("Enter age :: \n");
        scanf("%d",&e.age);

        printf("Enter salary :: \n");
        scanf("%d",&e.salary);

        fwrite(&e,sizeof(e),1,f1);
    }

    fclose(f1);

    f1=fopen("emp.txt","r");

    printf("\nName\tAge\tSalary\n");

    while(fread(&e,sizeof(e),1,f1)==1)
    {
        printf("%s\t%d\t%d\n",e.name,e.age,e.salary);
    }

    fclose(f1);

    getch();
}