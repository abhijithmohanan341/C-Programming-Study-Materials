#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct
{
  char name[30];
  char capital[30];
}country;



void main()
{
     int  i,n,j;
     country obj,a[50];
     FILE *ptr;
     clrscr();

     printf("\n\nEnter the no.of countries::");
     scanf("%d",&n);

     printf("\n\nEnter details of %d countries",n);

     ptr=fopen("country.txt","w");

     for(i=0;i<n;++i)
     {
	printf("\n\nEnter name of country::");
	fflush(stdin);
	gets(obj.name);
	printf("\n\nEnter the capital::");
	fflush(stdin);
	gets(obj.capital);
	fwrite(&obj,sizeof(obj),1,ptr);
     }

     fclose(ptr);

     ptr=fopen("country.txt","r");
     i=0;
     while((fread(&obj,sizeof(obj),1,ptr))==1)
     {

	a[i]=obj;
	i++;


     }
    fclose(ptr);

    for(i=0;i<n-1;i++)
     {
       for(j=i+1;j<n;j++)
	{
	  if((strcmp(a[i].name,a[j].name))>0)
	    {
	       obj=a[i];
	       a[i]=a[j];
	       a[j]=obj;
	    }
	}
     }

     printf("\n\nCountries are\n\n");
     for(i=0;i<n;++i)
     {
	printf("\n\n%s\t%s",a[i].name,a[i].capital);
     }
    fclose(ptr);

    getch();


}