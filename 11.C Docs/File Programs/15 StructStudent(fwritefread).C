#include<stdio.h>
#include<conio.h>


struct student
{
	int rollno;
	char name[20];
	int m1,m2,m3;
	int tot;
	float per;
	char grade;
};

void main()
{
	FILE *f1,*f2,*f3,*f4;

	struct student s,st[10]; // structure array
	int i,j,n;


	clrscr();

	f1=fopen("stud.txt","w");

	printf("\n\n\t\tEnter no of Students ::");
	scanf("%d",&n);

	printf("\n\n\t\tEnter Details \n");

	for(i=0;i<n;i++)
	{

	printf("\n\n\t\tEnter Roll No::");
	scanf("%d",&st[i].rollno);


	printf("\n\n\t\tEnter Name::");
	fflush(stdin);
	gets(st[i].name);

	printf("\n\n\t\tEnter Mark-1::");
	scanf("%d",&st[i].m1);

	printf("\n\n\t\tEnter Mark-2::");
	scanf("%d",&st[i].m2);

	printf("\n\n\t\tEnter Mark-3::");
	scanf("%d",&st[i].m3);


	st[i].tot=st[i].m1+st[i].m2+st[i].m3;
	st[i].per=(float)st[i].tot/300*100;

	if(st[i].per>=80)
	 {
	   st[i].grade='A';
	 }
	 else if(st[i].per>=60)
	 {
	   st[i].grade='B';
	 }
	 else if(st[i].per>=50)
	 {
	  st[i].grade='C';
	 }
	 else
	 {
	  st[i].grade='D';
	 }

	 fwrite(&st[i],sizeof(st[i]),1,f1);

      }

      fclose(f1);

      clrscr();



      f1=fopen("stud.txt","r");

	printf("\n\n\tStudentsReport\n\n");
	printf("\tRoll\tName\tM1\tM2\tM3\tTotal\tPer\tGrade\n\n");


       while(fread(&s,sizeof(s),1,f1)==1)
	{
		printf("\t%d\t%s\t",s.rollno,s.name);
		printf("%d\t%d\t%d\t",s.m1,s.m2,s.m3);
		printf("%d\t%.2f\t%c\n",s.tot,s.per,s.grade);


	}

	fclose(f1);

       /* Sort based on Names */


	for(i=0;i<n;i++)
	 {
	   for(j=i+1;j<n;j++)
	    {
	      if(strcmp(st[i].name,st[j].name)>0)
	       {
		 s=st[i];
		 st[i]=st[j];
		 st[j]=s;
	       }
	    }
	  }


	f2=fopen("sortname.txt","w");

	for(i=0;i<n;i++)
	 {
	    fwrite(&st[i],sizeof(st[i]),1,f2);
	 }

	fclose(f2);


      f2=fopen("sortname.txt","r");

	printf("\n\tSorted Order(Based on Names)\n");
	printf("\tRoll\tName\tM1\tM2\tM3\tTotal\tPer\tGrade\n\n");


       while(fread(&s,sizeof(s),1,f2)==1)
	{
		printf("\t%d\t%s\t",s.rollno,s.name);
		printf("%d\t%d\t%d\t",s.m1,s.m2,s.m3);
		printf("%d\t%.2f\t%c\n",s.tot,s.per,s.grade);


	}

	fclose(f2);



       /* Sort based on RollNo */



	for(i=0;i<n;i++)
	 {
	   for(j=i+1;j<n;j++)
	    {
	      if(st[i].rollno>st[j].rollno)
	       {
		 s=st[i];
		 st[i]=st[j];
		 st[j]=s;
	       }
	    }
	  }


	f3=fopen("sortroll.txt","w");

	for(i=0;i<n;i++)
	 {
	    fwrite(&st[i],sizeof(st[i]),1,f3);
	 }

	fclose(f3);


      f3=fopen("sortroll.txt","r");

	printf("\n\tSorted Order(Based on RollNumber)\n\n");
	printf("\tRoll\tName\tM1\tM2\tM3\tTotal\tPer\tGrade\n\n");


       while(fread(&s,sizeof(s),1,f3)==1)
	{
		printf("\t%d\t%s\t",s.rollno,s.name);
		printf("%d\t%d\t%d\t",s.m1,s.m2,s.m3);
		printf("%d\t%.2f\t%c\n",s.tot,s.per,s.grade);


	}

	fclose(f3);


       /* Sort based on TotalMark(RankList) */



	for(i=0;i<n;i++)
	 {
	   for(j=i+1;j<n;j++)
	    {
	      if(st[i].tot<st[j].tot)
	       {
		 s=st[i];
		 st[i]=st[j];
		 st[j]=s;
	       }
	    }
	  }


	f4=fopen("ranklist.txt","w");

	for(i=0;i<n;i++)
	 {
	    fwrite(&st[i],sizeof(st[i]),1,f2);
	 }

	fclose(f4);


      f4=fopen("ranklist.txt","r");

	printf("\n\tRankList\n");
	printf("\n\n\tStudentsReport\n\n");
	printf("\tRoll\tName\tM1\tM2\tM3\tTotal\tPer\tGrade\n\n");


       while(fread(&s,sizeof(s),1,f4)==1)
	{
		printf("\t%d\t%s\t",s.rollno,s.name);
		printf("%d\t%d\t%d\t",s.m1,s.m2,s.m3);
		printf("%d\t%.2f\t%c\n",s.tot,s.per,s.grade);


	}

	fclose(f4);





	getch();

}