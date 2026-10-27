// Write a C program using structure to read item details,
// calculate the total price and display the item details.

#include<stdio.h>
#include<conio.h>

void main()
{
    struct shopping
    {
        char itemcode[50];
        char itemname[50];
        int qty;
        float price;
        float total;
    }obj;

    clrscr();

    printf("Enter Item Code :: ");
    scanf("%s",obj.itemcode);

    printf("Enter Item Name :: ");
    scanf("%s",obj.itemname);

    printf("Enter Quantity :: ");
    scanf("%d",&obj.qty);

    printf("Enter Price :: ");
    scanf("%f",&obj.price);

    obj.total=obj.qty*obj.price;

    printf("\n\t\tSHOPPING DETAILS\n");

    printf("\nItem Code\tItem Name\tQuantity\tPrice\tTotal\n");

    printf("%s\t\t%s\t\t%d\t\t%.2f\t%.2f",
    obj.itemcode,
    obj.itemname,
    obj.qty,
    obj.price,
    obj.total);

    getch();
}

/*
Output:

Enter Item Code :: I101
Enter Item Name :: Pen
Enter Quantity :: 5
Enter Price :: 10

                SHOPPING DETAILS

Item Code       Item Name       Quantity        Price   Total
I101            Pen             5               10.00   50.00
*/