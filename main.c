#include <stdio.h>
#include <stdlib.h>
void menu();
//void billing();
//void daily_earnings();
int main()
{
    int option;
    do
    {
        system("CLS");
        printf("\t \t \t Canteen System Management\n");
        printf("\t \t \t DS Mini Project\n");
        printf(" Please choose any one of the following options:\n");
        printf(" 1.Menu related options\n 2.Billing related options\n 3.View Daily Bills/Profits.\n Enter '0' to close the application\n");
        scanf("%d",&option);
        switch(option)
        {

        case 0:
            printf("Exiting the software");
            exit(0);
            break;
        case 1: //move to menu model
            menu();
            //printf("Menu");
            break;
        case 2: //move to billing model
            //billing();
            printf("Billing");
            break;
        case 3: //move to earnings model
            //daily_earnings();
            printf("Earnings");
            break;
        default:
            printf("Invalid Choice.");
        }
    }
    while(option);
    //exit(0);
    return 0;
}
