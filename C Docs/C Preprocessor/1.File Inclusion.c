/*
  1.File Inclusion
  ----------------
   Inserting the content of another file into our source file

  Example
  -------

  File-1 : head.h
  ---------------
   #include<stdio.h>
   #include<conio.h>

  File-2 : sum.cpp
  ---------------
   int add(int a,int b)
    {
      int c;
      c=a+b;
      return c;
    }

  File-3 : mypgm.cpp
  ----------------

  #include<..\bin\head.h>
  #include<..\bin\sum.cpp>

  void main()
   {
     int a,b,c;
     clrscr();

     printf("Enter two numbers \n");
     scanf("%d%d",&a,&b);
     c=add(a,b);
     printf("Sum = %d\n",c);

     getch();
   }


*/
