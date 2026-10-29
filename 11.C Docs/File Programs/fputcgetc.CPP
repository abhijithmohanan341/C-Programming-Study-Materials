/*
 * Program to Read/Write using fgetc() and fputc()
 */

#include<stdio.h>
#include<conio.h>

void main()
{
FILE *fp1;
char c;
clrscr();

fp1=fopen("myfile.txt","w");

printf("Enter a line of text\n");

while((c=getchar())!='\n')
{
  fputc(c,fp1);
}

fclose(fp1);


fp1=fopen("myfile.txt","r");

printf("Content of File\n");

while((c=fgetc(fp1))!=EOF)
{
  printf("%c",c);
}
fclose(fp1);
getch();
};