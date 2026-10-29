/*
Write a C program using structure to read employee details,
calculate TA, DA, HRA, LIC, PF and Net Salary,
display all details in table format, search an employee
using Employee ID and sort employees based on Net Salary.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    struct employee
    {
        int employee_id;
        char employee_name[50];
        char employee_department[50];
        float basic_salary;
        float ta,da,hra,lic,pf,netsalary;
    }obj[50],temp;

    float n,i;
    int j,r,flag=0;

    clrscr();

    printf("Enter Number of Employees :: ");
    scanf("%d",&n);

    printf("\nEnter Employee Details\n");

    for(i=0;i<n;i++)
    {
        printf("\nEnter Employee ID :: ");
        scanf("%d",&obj[i].employee_id);

        printf("Enter Employee Name :: ");
        scanf("%s",obj[i].employee_name);

        printf("Enter Employee Department :: ");
        scanf("%s",obj[i].employee_department);

        printf("Enter Basic Salary :: ");
        scanf("%f",&obj[i].basic_salary);

        if(obj[i].basic_salary>=40000)
        {
            obj[i].ta=obj[i].basic_salary*10/100;
            obj[i].da=obj[i].basic_salary*15/100;
            obj[i].hra=obj[i].basic_salary*20/100;
            obj[i].lic=obj[i].basic_salary*5/100;
            obj[i].pf=obj[i].basic_salary*12/100;
        }
        else if(obj[i].basic_salary>=30000)
        {
            obj[i].ta=obj[i].basic_salary*8/100;
            obj[i].da=obj[i].basic_salary*12/100;
            obj[i].hra=obj[i].basic_salary*15/100;
            obj[i].lic=obj[i].basic_salary*5/100;
            obj[i].pf=obj[i].basic_salary*12/100;
        }
        else if(obj[i].basic_salary>=20000)
        {
            obj[i].ta=obj[i].basic_salary*5/100;
            obj[i].da=obj[i].basic_salary*10/100;
            obj[i].hra=obj[i].basic_salary*10/100;
            obj[i].lic=obj[i].basic_salary*5/100;
            obj[i].pf=obj[i].basic_salary*12/100;
        }
        else
        {
            obj[i].ta=obj[i].basic_salary*3/100;
            obj[i].da=obj[i].basic_salary*5/100;
            obj[i].hra=obj[i].basic_salary*5/100;
            obj[i].lic=obj[i].basic_salary*5/100;
            obj[i].pf=obj[i].basic_salary*12/100;
        }

        obj[i].netsalary=obj[i].basic_salary
                        +obj[i].ta
                        +obj[i].da
                        +obj[i].hra
                        -obj[i].lic
                        -obj[i].pf;
    }

    printf("\nEmployee Details\n\n");

    printf("ID\tName\tDept\tBasic\tTA\tDA\tHRA\tLIC\tPF\tNet Salary\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
        obj[i].employee_id,obj[i].employee_name,
        obj[i].employee_department,obj[i].basic_salary,
        obj[i].ta,obj[i].da,obj[i].hra,
        obj[i].lic,obj[i].pf,obj[i].netsalary);
    }

    printf("\nEnter Employee ID to Search :: ");
    scanf("%d",&r);

    flag=0;

    for(i=0;i<n;i++)
    {
        if(obj[i].employee_id==r)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("\nEmployee Found\n\n");

        printf("ID\tName\tDept\tBasic\tTA\tDA\tHRA\tLIC\tPF\tNet Salary\n");

        printf("%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
        obj[i].employee_id,obj[i].employee_name,
        obj[i].employee_department,obj[i].basic_salary,
        obj[i].ta,obj[i].da,obj[i].hra,
        obj[i].lic,obj[i].pf,obj[i].netsalary);
    }
    else
    {
        printf("\nEmployee Not Found\n");
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(obj[i].netsalary>obj[j].netsalary)
            {
                temp=obj[i];
                obj[i]=obj[j];
                obj[j]=temp;
            }
        }
    }

    printf("\nSorted Employee List (Net Salary Ascending)\n\n");

    printf("ID\tName\tDept\tBasic\tTA\tDA\tHRA\tLIC\tPF\tNet Salary\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
        obj[i].employee_id,obj[i].employee_name,
        obj[i].employee_department,obj[i].basic_salary,
        obj[i].ta,obj[i].da,obj[i].hra,
        obj[i].lic,obj[i].pf,obj[i].netsalary);
    }

    getch();
}

/*
Output:

Enter Number of Employees :: 2

Enter Employee Details

Enter Employee ID :: 101
Enter Employee Name :: Arun
Enter Employee Department :: HR
Enter Basic Salary :: 45000

Enter Employee ID :: 102
Enter Employee Name :: Amal
Enter Employee Department :: IT
Enter Basic Salary :: 25000

Employee Details

ID      Name    Dept    Basic       TA      DA      HRA     LIC     PF      Net Salary
101     Arun    HR      45000.00    4500.00 6750.00 9000.00 2250.00 5400.00 57600.00
102     Amal    IT      25000.00    1250.00 2500.00 2500.00 1250.00 3000.00 27000.00

Enter Employee ID to Search :: 101

Employee Found

ID      Name    Dept    Basic       TA      DA      HRA     LIC     PF      Net Salary
101     Arun    HR      45000.00    4500.00 6750.00 9000.00 2250.00 5400.00 57600.00

Sorted Employee List (Net Salary Ascending)

ID      Name    Dept    Basic       TA      DA      HRA     LIC     PF      Net Salary
102     Amal    IT      25000.00    1250.00 2500.00 2500.00 1250.00 3000.00 27000.00
101     Arun    HR      45000.00    4500.00 6750.00 9000.00 2250.00 5400.00 57600.00
*/