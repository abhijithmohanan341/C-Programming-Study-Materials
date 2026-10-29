/*
 * program to understand the use of fprintf(),fscanf()
 */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

void main()
{

 FILE *fptr;

 char name[25];
 int age;
 float salary;
 char ch;

 int i,n;

 clrscr();

 fptr = fopen("emp.txt", "w");

 if (fptr == NULL)
  {
     printf("\nUnable to open a file.");
     exit(0);
  }

  printf("Enter no of employees : ");
  scanf("%d",&n);

 for(i=0;i<n;i++)
 {
    printf("\nEnter name : ");
    gets(name);
    printf("Enter age : ");
    scanf("%d", &age);
    printf("Enter salary : ");
    scanf("%f", &salary);

    fprintf(fptr,"%s %d %f", name, age, salary);


 }
   fclose(fptr);

 fptr = fopen("emp.txt", "r");

 if (fptr == NULL)
  {
     printf("\nUnable to open a file.");
     exit(0);
  }
  printf("Name\tAge\tSalary\n");

  while(fscanf(fptr,"%s %d %f", name, &age, &salary)!=EOF)
  {
    printf("%s\t%d\t%f\n",name,age,salary);
  }

  fclose(fptr);

  getch();
}
