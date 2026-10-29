/*
 * Program to Read/Write using fgets() and fputs()
 */

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

FILE *fp1;
char name[100];

clrscr();

fp1=fopen("myfile.txt","w");

printf("Enter names : stop to exit\n");

for(;;)
{
  gets(name);

  fflush(stdin);
  if(strcmp(name,"stop")==0)
    break;
  fputs(name,fp1);
  putc('\n',fp1);
}

fclose(fp1);


fp1=fopen("myfile.txt","r");

printf("Content of File\n");

while((fgets(name,80,fp1))!=NULL)
{
  puts(name);
}

fclose(fp1);

getch();
}