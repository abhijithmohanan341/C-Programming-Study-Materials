#include<stdio.h>
#include<conio.h>

/*
  Typedef
  -------
      A typedef declartion lets you to define your own identifiers that
      can be used in place of type specifiers such as int,float etc.
      A typedef declartion doesn't reserve storage.
      The name you define using typedef are not new data types,but
      synonyms for the data types or combination of data types they represent.

*/

void main()
	{

	  typedef int number;
	  number a,b,c;  //int a,b,c

	  clrscr();

	  printf("\n\n\t\tEnter two numbers\n");
	  scanf("%d%d",&a,&b);

	  c=a+b;

	  printf("\n\n\t\tSum=%d",c);

     getch();

  }
