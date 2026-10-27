#include<stdio.h>
#include<conio.h>
#include<ctype.h>

/* even-odd seperation  */

void main()
{

FILE *f1,*f2,*f3;
int no;


clrscr();

f1=fopen("data.txt","w");

printf("Enter limit :");
scanf("%d",&n);

printf("Enter Values\n");

for(i=0;i<n;i++)
{
 printf("\nEnter Number : ");
 scanf("%d",&no);
 putw(no,f1);

}

fclose(f1);
printf("\nValues\n");

f1=fopen("data.txt","r");
f2=fopen("even.txt","w");
f3=fopen("odd.txt","w");

while((no=getw(f1))!=EOF)
{
  printf("%d\n",no);
  if(no%2==0)
   {
     putw(no,f2);

   }
  else
   {
     putw(no,f3);

   }
}

fcloseall();

printf("Even numbers\n");

f2=fopen("even.txt","r");

while((no=getw(f2))!=EOF)
{
  printf("%d\n",no);
}

fclose(f2);

printf("Odd numbers\n");

f3=fopen("odd.txt","r");

while((no=getw(f3))!=EOF)
{
  printf("%d\n",no);
}

fclose(f3);



getch();
}
