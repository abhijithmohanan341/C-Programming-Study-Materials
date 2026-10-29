#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

/*  sort strings in a file  */

void main()
{
 char name[50],temp[50],str[50][50];
 int i=0,j,n;
 FILE *f1;

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

while((fgets(name,30,f1))!=NULL)
{
  printf("%s",name);
  strcpy(str[i],name);
  i++;
}

fclose(f1);

n=i;




for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
  {
    if(strcmp(str[i],str[j])>0)
     {
       strcpy(temp,str[i]);
       strcpy(str[i],str[j]);
       strcpy(str[j],temp);
     }
  }
}

f1=fopen("data.txt","w+");

for(i=0;i<n;i++)
{
  fputs(str[i],f1);
}

rewind(f1);

printf("\nSorted List\n");

while((fgets(name,30,f1))!=NULL)
{
  printf("%s",name);
}

fclose(f1);



getch();
}
