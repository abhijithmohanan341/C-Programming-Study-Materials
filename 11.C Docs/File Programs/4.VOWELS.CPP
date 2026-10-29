/*
 * vowels separate
 */

#include<stdio.h>
#include<conio.h>

void main()
{
FILE *f1,*f2,*f3;
char c;
clrscr();

f1=fopen("myfile.txt","w");

printf("Enter a line of text\n");

while((c=getchar())!='\n')
{
  putc(c,f1);
}

fclose(f1);


f1=fopen("myfile.txt","r");
f2=fopen("vow.txt","w");
f3=fopen("cons.txt","w");

printf("Content of File\n");

while((c=getc(f1))!=EOF)
{
  printf("%c",c);
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
   {
     putc(c,f2);
   }
  else
   {
     putc(c,f3);
   }
}

fcloseall();


f2=fopen("vow.txt","r");


printf("\nContent of File vowel\n");

while((c=getc(f2))!=EOF)
{
  printf("%c",c);

}

fclose(f2);

f3=fopen("cons.txt","r");

printf("\nContent of File Con\n");

while((c=getc(f3))!=EOF)
{
  printf("%c",c);

}

fclose(f3);



getch();
}