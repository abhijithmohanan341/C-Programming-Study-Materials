/*
 An enumeration consists of a set of named integer constants.
 An enumeration type declaration gives the name of the (optional)
 enumeration tag and defines the set of named integer identifiers
 (called the "enumeration set," "enumerator constants," "enumerators,"
 or "members"). A variable with enumeration type stores one of the
 values of the enumeration set defined by that type.

 by default,memebers are intialized from 0,1...

 It is closely related to #define preprocessor

 Example
 -------

 1. enum week{sun=1,mon,tue,....sat}days;
    sun=1 (#define sun=1)
    mon=2 (#define mon=2)
    .....

 2. enum values{a,b,c=20,d,e=30,f}val;
    a=0
    b=1
    c=20
    d=21
    e=30
    f=31

*/

#include<stdio.h>
#include<conio.h>


void main()
{
 enum week{sun=1,mon,tue,wed,thu,fri,sat};
 week day;
 int d;

 clrscr();

 printf("Friday = %d\n",day=fri);

 printf("Enter Day Number between 1-7 : ");
 scanf("%d",&d);

 day=week(d);

 if(day==sun||day==sat)
  {
    printf("Week End ");
  }
 else
  {
    printf("Working Days ");
  }

  getch();
}