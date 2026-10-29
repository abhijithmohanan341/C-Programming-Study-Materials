#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
 char name[50];
 FILE *f1,*f2,*f3;

clrscr();

f1=fopen("first.txt","w");

printf("\nEnter Values to File-1\n");
printf("Enter names : stop to exit\n");

for(;;)
{
 gets(name);
 if(strcmp(name,"stop")==0)
  break;
 fputs(name,f1);
// putc('\n',f1);

}

fclose(f1);

f2=fopen("Second.txt","w");

printf("\nEnter Values to File-2\n");
printf("Enter names : stop to exit\n");

for(;;)
{
 gets(name);
 if(strcmp(name,"stop")==0)
  break;
 fputs(name,f2);
 //putc('\n',f2);

}

fclose(f1);




f1=fopen("first.txt","r");

f3=fopen("merge.txt","w");

while((fgets(name,30,f1))!=NULL)
{
  fputs(name,f3);
  putc('\n',f3);
}

fcloseall();


f2=fopen("second.txt","r");
f3=fopen("merge.txt","a");



while((fgets(name,30,f2))!=NULL)
{
 fputs(name,f3);
 putc('\n',f3);
}

fcloseall();




printf("\nMergedFile\n");

f3=fopen("merge.txt","r");
while((fgets(name,30,f3))!=NULL)
{
  printf("%s\n",name);
}

fclose(f3);

getch();
}
