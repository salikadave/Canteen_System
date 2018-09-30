#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct menu_item
{
    int item_code;
    char item_name[100];
    float cost;
};
struct menu_item item_list[10];
void add_item();
void delete_item();
void edit_item();
void display_item();
void menu()
{
    int option;
    do
    {
        system("CLS");
        printf("\n 1.Add an Item. \n 2.Delete an Item \n 3.Edit an Item \n 4.Display existing Menu \n 0.Go back to the main screen.");
        scanf("%d",&option);
        switch(option)
        {
        case 0:
            printf("Exiting");
            break;
        case 1:
            add_item();
            break;
        case 2:
            delete_item();
            break;
        case 3:
            edit_item();
            break;
        case 4:
            display_item();
            break;
        default:
            printf("Invalid Input");
        }
    }
    while(option);
}
void add_item()
{
    printf("\n IN add item function");
    printf("Enter no. of items to be added.");
    scanf("%d",&n);
    printf("\n Please enter item name: ");
    int i=1,n;
    //scanf("%[^\n]%*c",item_list[1].item_name);
    //scanf("%s",item_list[1].item_name);
    do{
    fflush(stdin);
    gets(item_list[i].item_name);
    printf("\n Enter cost of this item per unit:");
    scanf("%f",&item_list[i].cost);
    i++;
    }while(i<=n);
    //printf("\n Item Name: ");
    //puts(item_list[1].item_name);
    //printf("\n Cost: %f",item_list[1].cost);
    display_item(n);
}
void delete_item()
{
}
void edit_item()
{
}
void display_item(int n)
{
    int i=1;
    do{
    printf("\n Item name: %s Cost: %f",item_list[i].item_name,item_list[i].cost);
    i++;
    }while(i<=n);
    printf("\n Press any key to continue");
    getch();
}
