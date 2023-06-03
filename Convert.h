#ifndef CONVERT_H_INCLUDED
#define CONVERT_H_INCLUDED
#include "Insert.h"

void listOfcurr()
{
    //LIST of currencies
    printf("============ LIST ==========\n");
    printf("=  1. EUR         7.USD    =\n");
    printf("=  2. LEK         8.GBP    =\n");
    printf("=  3. AUD         9.CAD    =\n");
    printf("=  4. CHF         10.CNY   =\n");
    printf("=  5. HKD         11.NZD   =\n");
    printf("=  6. SEK         12.JPY   =\n");
    printf("============================\n");
}

void convertCURR(struct Mon **head)
{
    int opt1,opt2,id;
    double curr;

    listOfcurr();

    //Getting the convertion data from the user

    printf("Enter the ID of the exchange: \n");
    scanf("%d",&id);

    //get the first currency

    printf("Pick initial currency:\n");
    scanf("%d",&opt1);

    //check for option 1

    if((opt1<1)||(opt1>12))
    {
        printf("Invalid choice.\nTry again \n");
        return;
    }
  //get initial amount

    printf("Enter the amount: ");
    scanf("%lf",&curr);

  //get the conversion currency
    printf("Pick the currency you want to convert to: \n");
    scanf("%d",&opt2);


    // check for option 2
    if((opt2<1)||(opt2>12))
    {
        printf("Invalid choice.\nTry again \n");
        return;
    }

    //Saving info at a  Node for display function use

    struct Mon* newMon;
    newMon = (struct Mon*)malloc(sizeof(struct Mon));
    newMon->ID=id;
    newMon->tranac=curr;
    newMon->rez=insertExch(id,opt1,opt2,curr);

 //switch function for saving string currency terms

    switch(opt1)
    {
    case 1:
        strcpy(newMon->opt1,"EUR");
        break;
    case 2:
        strcpy(newMon->opt1,"LEK");
        break;

    case 3:
        strcpy(newMon->opt1,"AUD");
        break;

    case 4:
        strcpy(newMon->opt1,"CHF");
        break;

    case 5:
        strcpy(newMon->opt1,"HKD");
        break;
    case 6:
        strcpy(newMon->opt1,"SEK");
        break;
    case 7:
        strcpy(newMon->opt1,"USD");
        break;
    case 8:
        strcpy(newMon->opt1,"GBP");
        break;
    case 9:
        strcpy(newMon->opt1,"CAD");
        break;
    case 10:
        strcpy(newMon->opt1,"CNY");
        break;
    case 11:
        strcpy(newMon->opt1,"NZD");
        break;
    case 12:
        strcpy(newMon->opt1,"JPY");
        break;
    }



    switch(opt2)
    {
    case 1:
        strcpy(newMon->opt2,"EUR");
        break;
    case 2:
        strcpy(newMon->opt2,"LEK");
        break;

    case 3:
        strcpy(newMon->opt2,"AUD");
        break;

    case 4:
        strcpy(newMon->opt2,"CHF");
        break;

    case 5:
        strcpy(newMon->opt2,"HKD");
        break;

    case 6:
        strcpy(newMon->opt2,"SEK");
        break;
    case 7:
        strcpy(newMon->opt2,"USD");
        break;
    case 8:
        strcpy(newMon->opt2,"GBP");
        break;
    case 9:
        strcpy(newMon->opt2,"CAD");
        break;
    case 10:
        strcpy(newMon->opt2,"CNY");
        break;
    case 11:
        strcpy(newMon->opt2,"NZD");
        break;
    case 12:
        strcpy(newMon->opt2,"JPY");
        break;
    }

/////////////////////////////////////////////////

    newMon->next = *head;
    *head=newMon;

}

#endif // CONVERT_H_INCLUDED
