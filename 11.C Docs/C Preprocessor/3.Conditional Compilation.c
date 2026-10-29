/*

  Conditional Compilation
  -----------------------
       Here we use the command "#ifdef" to check a macro is defined or not.
       If macro defined then it execute statement below it.
       If macro not defined "#else" will work.

  Example
  -------

	#include<stdio.h>
	#include<conio.h>

	#define max(a,b) (a>b)?a:b

	void main()
	 {
	   int a,b,l;
	   clrscr();

	   #ifdef max
		printf("enter two numbers  ");
		scanf("%d%d",&a,&b);
		l=max(a,b);
		printf("Largest = %d",l);
	   #else
		printf("Macro not defined ");
	   #endif

	   getch();
	}


*/
