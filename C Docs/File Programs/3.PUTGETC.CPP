/*
 * putc,getc
 */

#include<stdio.h>
#include<conio.h>

void main()
{
FILE *f1;
char c;
clrscr();

f1=fopen("myfile.txt","w");

printf("Enter a line of text\n");

while((c=getchar())!='\n')
{
  putc(c,f1);
}

fclose(f1);


f1=fopen("myfile.txt","r");


printf("Content of File\n");

while((c=getc(f1))!=EOF)
{
  printf("%c",c);
}

fclose(f1);


getch();
}