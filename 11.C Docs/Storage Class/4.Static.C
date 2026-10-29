#include<stdio.h>
#include<conio.h>

/*
  Static
  ------
    The value of a static variable in a function is retained between
    repeated function calls to the same function.

    For declartion use the key word " static ".

    static variables automatically initialized to zero.

*/

#include<stdio.h>
#include<conio.h>


void main()
{
 void show();

 clrscr();

  show();

  show();

 getch();
}

void show()
{
 static int s;
 s=s+1;
 printf("\nValue : %d\n",s);
}