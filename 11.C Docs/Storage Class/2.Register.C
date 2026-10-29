#include<stdio.h>
#include<conio.h>

/*
  Register
  --------

    Automatic variables are stored in RAM,for most computers accessing data
    in memory is considerably slower than processing directly in the CPU.

    Registers are memory located within the CPU itself where data can stored
    and accessed quickly.

    The compiler determines what data is to be stored in the register
    of the CPU at what times.

    for declartion use the key word " register ".

*/

void main()
{
 register int a,b,c;

 clrscr();
 printf("Enter two numbers\n");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("Sum = %d",c);
 getch();
}
