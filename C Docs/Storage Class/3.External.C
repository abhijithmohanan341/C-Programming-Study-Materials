#include<stdio.h>
#include<conio.h>

/*
  External
  --------
    External variables are also known as global variables

    For declartion use the key word " extern ".

    External variables initlized to zero

Example
-------

File-1  -- vbls.h
------
 extern int a=0,b=0,c=0;

File-2
------

#include<stdio.h>
#include<conio.h>
#include<..\bin\vbls.h>

void main()
{

 clrscr();
 printf("Enter two numbers\n");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("Sum = %d",c);
 getch();
}

*/