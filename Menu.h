#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define MAX 10
int n;
int no_of_items=0;
struct menu_item
{
    int item_code;
    char item_name[100];
    float cost;
    //struct *menu_item;
};
struct menu_item item_list[MAX];
struct menu_item menu_display; //display menu
void add_item();
void delete_item();
void edit_item();
void display_item();
void add_to_file();
void menu()
{
    int option;
    do
    {
        system("CLS");
        printf("\n 1.Create Menu. \n 2.Delete an Item \n 3.Edit an Item \n 4.Display existing Menu \n 0.Go back to the main screen.");
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
    //printf("\n IN add item function");
    FILE *fp;
    fp = fopen("Menu_1.txt","a+");
    if(fp==NULL)
    {
        printf("\n Error in opening in File.");
        //return 0;
    }
    else
    {
        printf("\n Enter no. of items to be added.");
        scanf("%d",&n);
        //no_of_items = no_of_items + n;
        //fprintf(fp,"No of items = %d",no_of_items);
        int i=1;
        //scanf("%[^\n]%*c",item_list[1].item_name);
        //scanf("%s",item_list[1].item_name);
        //if(i!=1)
        //{
        //  i = recent_item;
        //}
        do
        {
            item_list[i].item_code = i;
            fflush(stdin);
            printf("\n Please enter item name: ");
            gets(item_list[i].item_name);
            printf("\n Enter cost of this item per unit:");
            scanf("%f",&item_list[i].cost);
            fprintf(fp,"\n %d. \t %s \t %f",i,item_list[i].item_name,item_list[i].cost);
            //fwrite(&item_list[i], sizeof(struct menu_item), 1, fp);
            i++;
        }
        while(i<=n);
        //recent_item=i;
        fclose(fp);
    }//end of if-else
    //add_to_file();
    //printf("\n Item Name: ");
    //puts(item_list[1].item_name);
    //printf("\n Cost: %f",item_list[1].cost);
    display_item();
}
void delete_item()
{
}
void edit_item()
{
}
void display_item()
{
    //int i=1;
    FILE *fp;
    fp = fopen("Menu_1.txt","r");
    if(fp==NULL)
    {
        printf("sdfg");
    }
    //fscanf(fp,"%d",&no_of_items);
    printf("\n SR. NO. \t\t\t NAME \t\t\t COST ");
    /*
    char c = fgetc(fp);
    if(c!=EOF){
    fscanf(fp,"%d %s %f", &item_list[i].item_code, item_list[i].item_name, &item_list[i].cost);
    //printf("ha;lsg");
    printf("\n %d \t\t\t %s \t\t\t %f", item_list[i].item_code, item_list[i].item_name, item_list[i].cost);
    }
    */
    /*
    while( fread(&item_list, sizeof(item_list),1,fp) == 1)
    {
        printf("\n Item Code: %d Item name: %s Cost: %f",item_list.item_code,item_list.item_name,item_list.cost);
        i++;
    } */
    while(fread(&menu_display, sizeof(menu_display),1,fp)==1)
    {
        printf("\n %d \t\t\t %s \t\t\t %f", menu_display.item_code, menu_display.item_name, menu_display.cost);
    }
    fclose(fp);
    printf("\n Press any key to continue");
    getch();
}
