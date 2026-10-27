/*
 * fwrite,fread
 */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

void main( )
{
 FILE *fp ;
 char c='y';

 struct employee
 {
   char name[40] ;
   int age ;
   int sal ;
 };

 struct employee e ;

 clrscr();

 fp=fopen("EMP.txt","w");

 if(fp == NULL )
 {
   puts("Cannot open file" ) ;
   exit(0) ;
 }

 while(c=='y')
 {

  printf ("\nEnter name : ");
  gets(e.name);
  fflush(stdin);
  printf("Enter age : ");
  scanf("%d",&e.age);
  printf("Enter Salary : ");
  scanf("%d",&e.sal ) ;

  fwrite(&e,sizeof(e),1,fp) ;

  printf("Add another record (y/n) : ");
  fflush(stdin);
  c=tolower(getche());
}

fclose(fp);

fp=fopen("EMP.txt","r");

if(fp==NULL)
{
 puts("Cannot open file") ;
 exit(0);
}

printf("\nName\tAge\tSalary\n");

while(fread(&e,sizeof(e),1,fp)==1)
{
 printf("\n%s\t%d\t%d", e.name, e.age, e.sal) ;
}
 fclose(fp) ;
getch();
};