#include<stdio.h>
#include<conio.h>

/*
  Automatic
  ---------

  1.They are declared at the start of a program block such as in the { }.
    Memory is allocated automatically upon entry to a block and freed
    automatically upon exit from the block.

  2.The scope of varaible is local to the block in which they are
    declared.For these reason they are also called local varaibles.

  3.For decalrtion we can use the keyword "auto"

  4.Automatic varaibles declared with initilizers are intilized every time
    the block in which they are declared is enterd or accessed.

  5.They are stored in RAM.

*/

void main()
{
 auto int a,b,c;

 clrscr();
 printf("Enter two numbers\n");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("Sum = %d",c);
 getch();
}
