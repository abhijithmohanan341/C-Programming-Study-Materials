#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

/*  sort strings in a file  */

void main()
{
 char name[50];
 FILE *f1,*f2;

clrscr();

f1=fopen("data.txt","w");

printf("Enter names : stop to exit\n");

for(;;)
{
 gets(name);
 if(strcmp(name,"stop")==0)
  break;
 fputs(name,f1);
 putc('\n',f1);

}

fclose(f1);

printf("\nData\n");

f1=fopen("data.txt","r");
f2=fopen("cpyfile.txt","w");

while((fgets(name,30,f1))!=NULL)
{
  printf("%s",name);
  fputs(name,f2);
  putc('\n',f2);
}

fcloseall();


f2=fopen("cpyfile.txt","r");

printf("\nCopy File Content\n");

while((fgets(name,30,f2))!=NULL)
{
  printf("%s",name);
}

fclose(f2);



getch();
}
