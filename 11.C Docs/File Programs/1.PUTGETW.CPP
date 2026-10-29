/*
 * Program to Read/Write using getw() and putw()
 */
 
#include<stdio.h>
#include<conio.h>

void main()
{
FILE *fp1;
int n,number,i;
clrscr();

fp1=fopen("myfile.txt","w"); //

printf("Enter no of elements : ");
scanf("%d",&n);

printf("Enter Values\n");

for(i=0;i<n;i++)
{
 printf("Enter number : ");
 scanf("%d",&number);
 putw(number,fp1);    // putw(intger vble,file pointer)
}

fclose(fp1);
	   //10 20 30

fp1=fopen("myfile.txt","r");

printf("Content of File\n");

while((number=getw(fp1))!=EOF) //
{
  printf("%d\n",number);
}

fclose(fp1);

getch();
}