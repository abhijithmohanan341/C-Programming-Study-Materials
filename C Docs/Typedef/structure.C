#include<stdio.h>
#include<conio.h>

typedef struct
{
 int roll;
 char name[50];
 int mark;
}student;

void main()
	{

	  student st;

	  clrscr();

	  printf("\n\n\t\tEnter roll number :: ");
	  scanf("%d",&st.roll);

	  printf("\n\n\t\tEnter Name :: ");
	  gets(st.name);

	  printf("\n\n\t\tEnter Mark :: ");
	  scanf("%d",&st.mark);


	  printf("\n\n\t\tRollNo : %d\n",st.roll);
	  printf("\n\n\t\tName   : %s\n",st.name);
	  printf("\n\n\t\tMArk   : %d\n",st.mark);


     getch();

  }
