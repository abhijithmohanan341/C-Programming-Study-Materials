/*

  Macro Substitution
  ------------------

  1.Simple Macro
  --------------
	#include<stdio.h>
	#include<conio.h>

	#define pi 3.14  // macro definition

	void main()
	 {
	   float r,a;
	   clrscr();
	   printf("enter radius : ");
	   scanf("%f",&r);
	   a=pi*r*r;    // macro substitution
	   printf("Area = %f",a);
	   getch();
	}


  2.Multiple Macro
  ----------------
	#include<stdio.h>
	#include<conio.h>

	#define a 40
	#define b 20
	#define s (a+b)
	#define d (a-b)

	void main()
	 {
	   int r;
	   clrscr();
	   printf("Sum    = %d \n",s);
	   printf("Diff   = %d \n",d);
	   r=2*s;
	   printf("Result = %d\n",p);
	   getch();
	}

    output
    ------
      Sum     = 60
      Diff    = 20
      Result  = 120

  3.Functional Macro
  ------------------

	#include<stdio.h>
	#include<conio.h>

	#define square(a) a*a //functional macro

	void main()
	 {
	   int n,s;
	   clrscr();
	   printf("enter number : ");
	   scanf("%d",&n);
	   s=square(n);
	   printf("Square = %d",s);
	   getch();
	}

  4.Nested Macro
  ------------------
	#include<stdio.h>
	#include<conio.h>

	#define square(a) a*a
	#define cube(a) (square(a)*a) //nested macro

	void main()
	 {
	   int n,s,v;
	   clrscr();
	   printf("enter number : ");
	   scanf("%d",&n);

	   s=square(n);
	   printf("Square = %d",s);

	   v=cube(n);
	   printf("Cube = %d\n",v);

	   getch();
	}


*/
