// Write a C program using structure to read one employee's details
// and calculate TA, DA, HRA, LIC, PF and Net Salary.

#include<stdio.h>
#include<conio.h>

void main()
{
    struct employee
    {
        int employee_id;
        char employee_name[50];
        char employee_department[50];
        float employee_basic_salary;
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
    scanf("%f",&obj.employee_basic_salary);

    obj.ta=obj.employee_basic_salary*10/100;
    obj.da=obj.employee_basic_salary*15/100;
    obj.hra=obj.employee_basic_salary*20/100;
    obj.lic=obj.employee_basic_salary*5/100;
    obj.pf=obj.employee_basic_salary*12/100;

    obj.netsalary=obj.employee_basic_salary+
                  obj.ta+
                  obj.da+
                  obj.hra-
                  obj.lic-
                  obj.pf;

    printf("\nEmployee Salary Details\n");

    printf("\nEmployee ID :: %d",obj.employee_id);
    printf("\nEmployee Name :: %s",obj.employee_name);
    printf("\nEmployee Department :: %s",obj.employee_department);
    printf("\nBasic Salary :: %.2f",obj.employee_basic_salary);
    printf("\nTA :: %.2f",obj.ta);
    printf("\nDA :: %.2f",obj.da);
    printf("\nHRA :: %.2f",obj.hra);
    printf("\nLIC :: %.2f",obj.lic);
    printf("\nPF :: %.2f",obj.pf);
    printf("\nNet Salary :: %.2f",obj.netsalary);

    getch();
}

/*
Output:

Enter Employee ID :: 101
Enter Employee Name :: Arun
Enter Employee Department :: HR
Enter Basic Salary :: 30000

Employee Salary Details

Employee ID :: 101
Employee Name :: Arun
Employee Department :: HR
Basic Salary :: 30000.00
TA :: 3000.00
DA :: 4500.00
HRA :: 6000.00
LIC :: 1500.00
PF :: 3600.00
Net Salary :: 38400.00
*/