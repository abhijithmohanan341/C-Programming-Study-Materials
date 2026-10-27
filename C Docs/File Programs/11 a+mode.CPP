#include<stdio.h>
#include<conio.h>
#include<ctype.h>

/*  a+ mode  */

void main()
{

FILE *f1;
int no;
char c='y';

clrscr();

f1=fopen("data.txt","w");

printf("Enter Values\n");

while(c=='y')
{
 printf("\nEnter Number : ");
 scanf("%d",&no);
 putw(no,f1);
 printf("\ndo u want to cont...(y/n) : ");
 c=tolower(getche());
}

fclose(f1);
printf("\nValues\n");

f1=fopen("data.txt","r");

while((no=getw(f1))!=EOF)
{
  printf("%d\n",no);
}

fclose(f1);

f1=fopen("data.txt","a+");
c='y';

while(c=='y')
{
  printf("\nEnter Number : ");
  scanf("%d",&no);
  putw(no,f1);
  printf("\ndo u want to cont...(y/n) : ");
  c=tolower(getche());
}



printf("\nAfter Appending\n");

rewind(f1);

while((no=getw(f1))!=EOF)
{
  printf("%d\n",no);
}

fclose(f1);



getch();
}
