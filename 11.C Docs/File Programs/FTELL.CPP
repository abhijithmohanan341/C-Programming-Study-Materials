/*
 * ftell example
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
 long int size,pos;
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

while((fread(&e,sizeof(e),1,fp))==1)
{
  printf("%s\t%d\t%d\n",e.name,e.age,e.sal);
  pos=ftell(fp);
  printf("Pos of file pointer at : %ld\n",pos);
}


fseek(fp,0,SEEK_END);
size=ftell(fp);
fclose(fp);
printf("\nSize of file is %ld bytes\n",size);

getch();
}