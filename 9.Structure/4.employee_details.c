// Write a C program using structure to read one employee's details,
// calculate TA, DA, HRA, LIC, PF and Net Salary using if-else if-else,
// and display all details in table format.

#include<stdio.h>
#include<conio.h>

void main()
{
    struct employee
    {
        int employee_id;
        char employee_name[50];
        char employee_department[50];
        float basic_salary;
        float ta,da,hra,lic,pf,netsalary;
    }obj;

    clrscr();

    printf("Enter Employee ID :: ");
    scanf("%d",&obj.employee_id);

    printf("Enter Employee Name :: ");
    scanf("%s",obj.employee_name);

    printf("Enter Employee Department :: ");
    scanf("%s",obj.employee_department);

    printf("Enter Basic Salary :: ");
    scanf("%f",&obj.basic_salary);

    if(obj.basic_salary>=40000)
    {
        obj.ta=obj.basic_salary*10/100;
        obj.da=obj.basic_salary*15/100;
        obj.hra=obj.basic_salary*20/100;
        obj.lic=obj.basic_salary*5/100;
        obj.pf=obj.basic_salary*12/100;
    }
    else if(obj.basic_salary>=30000)
    {
        obj.ta=obj.basic_salary*8/100;
        obj.da=obj.basic_salary*12/100;
        obj.hra=obj.basic_salary*15/100;
        obj.lic=obj.basic_salary*5/100;
        obj.pf=obj.basic_salary*12/100;
    }
    else if(obj.basic_salary>=20000)
    {
        obj.ta=obj.basic_salary*5/100;
        obj.da=obj.basic_salary*10/100;
        obj.hra=obj.basic_salary*10/100;
        obj.lic=obj.basic_salary*5/100;
        obj.pf=obj.basic_salary*12/100;
    }
    else
    {
        obj.ta=obj.basic_salary*3/100;
        obj.da=obj.basic_salary*5/100;
        obj.hra=obj.basic_salary*5/100;
        obj.lic=obj.basic_salary*5/100;
        obj.pf=obj.basic_salary*12/100;
    }

    obj.netsalary=obj.basic_salary+
                  obj.ta+
                  obj.da+
                  obj.hra-
                  obj.lic-
                  obj.pf;

    printf("\n\t\tEMPLOYEE SALARY DETAILS\n\n");

    printf("ID\tName\tDept\tBasic\tTA\tDA\tHRA\tLIC\tPF\tNet Salary\n");

    printf("%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
    obj.employee_id,
    obj.employee_name,
    obj.employee_department,
    obj.basic_salary,
    obj.ta,
    obj.da,
    obj.hra,
    obj.lic,
    obj.pf,
    obj.netsalary);

    getch();
}

/*
Output:

Enter Employee ID :: 101
Enter Employee Name :: Arun
Enter Employee Department :: HR
Enter Basic Salary :: 45000

        EMPLOYEE SALARY DETAILS

ID      Name    Dept    Basic       TA      DA      HRA     LIC     PF      Net Salary
101     Arun    HR      45000.00    4500.00 6750.00 9000.00 2250.00 5400.00 57600.00
*/