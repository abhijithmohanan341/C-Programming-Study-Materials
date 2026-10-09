// Read Roll Number, Name and Three Marks; Find Total, Percentage and Grade

#include<stdio.h>
#include<conio.h>

void main()
{
    int roll,m1,m2,m3,total;
    char name[50];
    float percentage;

    printf("Enter Roll Number ::\n");
    scanf("%d",&roll);

    printf("Enter Name ::\n");
    scanf("%s",name);

    printf("Enter Three Marks ::\n");
    scanf("%d%d%d",&m1,&m2,&m3);

    total=m1+m2+m3;
    percentage=total/3.0;

    printf("\nRoll Number :: %d",roll);
    printf("\nName :: %s",name);
    printf("\nTotal Marks :: %d",total);
    printf("\nPercentage :: %.2f",percentage);

    if(percentage>=90)
    {
        printf("\nGrade :: A");
    }
    else if(percentage>=80)
    {
        printf("\nGrade :: B");
    }
    else if(percentage>=70)
    {
        printf("\nGrade :: C");
    }
    else if(percentage>=50)
    {
        printf("\nGrade :: D");
    }
    else
    {
        printf("\nGrade :: F");
    }

    getch();
}