/*
 * fseek example
 */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

void main( )
{
 FILE *fp ;
 char c='y';
 int n;

 struct emp
 {
   char name[40] ;
   int age ;
   int sal ;
 };

 struct emp e ;

 clrscr();

 fp=fopen("EMP.DAT","w");

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

fp=fopen("EMP.DAT","r");

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

fp=fopen("EMP.dat","r");

if(fp==NULL)
{
  printf("\n error in opening file");
  exit(0);
}

printf("\nEnter the record no to be read : ");
scanf("%d",&n);

fseek(fp,(n-1)*sizeof(emp),0);


fread(&e,sizeof(e),1,fp);

printf("%s\t",e.name);
printf("%d\t",e.age);
printf("%d\n",e.sal);

fclose(fp);

getch();
};