#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"
#include "Convert.h"
#include "Insert.h"
#include "Dis.h"
#include "SearchID.h"
#include "ACCMOD.h"

void displayRates()
{
    printf("================================ EXCH RATES GLOB =================================\n");
    printf("= 1 EUR == 1.08 USD      =   1 USD == 0.92 EUR     =    1000 LEK == 8.87 EUR     = \n");
    printf("= 1 EUR == 110.93 LEK    =   1 USD == 102.67 LEK   =    1000 LEK == 9.59 USD     = \n");
    printf("= 1 EUR == 0.868 GBP     =   1 USD == 0.803 GBP    =    1000 LEK == 7.71 GBP     = \n");
    printf("= 1 EUR == 1.62 AUD      =   1 USD == 1.50 AUD     =    1000 LEK == 14.4 AUD     = \n");
    printf("= 1 EUR == 1.458 CAD     =   1 USD == 1.34 CAD     =    1000 LEK == 12.95 CAD    = \n");
    printf("= 1 EUR == 0.97 CHF      =   1 USD == 0.898 CHF    =    1000 LEK == 8.62 CHF     = \n");
    printf("= 1 EUR == 7.57 CNY      =   1 USD == 7.01 CNY     =    1000 LEK == 67.24 CNY    = \n");
    printf("= 1 EUR == 8.44 HKD      =   1 USD == 7.81 HKD     =    1000 LEK == 75.01 HKD    = \n");
    printf("= 1 EUR == 1.72 NZD      =   1 USD == 1.59 NZD     =    1000 LEK == 15.28 NZD    = \n");
    printf("= 1 EUR == 11.37 SEK     =   1 USD == 10.52 SEK    =    1000 LEK == 100.9 SEK    = \n");
    printf("= 1 EUR == 149.07 JPY    =   1 USD == 137.93 JPY   =    1000 LEK == 1323.8 JPY   = \n");
    printf("==================================================================================\n\n");
}

void displayMenu() {
    //main home MENU
    printf("==================== MENU ================\n");
    printf("=     1. Convert Currencies              =\n");
    printf("=     2. Display transactions            =\n");
    printf("=     3. Search a transaction using  ID  =\n");
    printf("=     4. ACCOUNT MODE                    =\n");
    printf("=     0. Exit                            =\n");
    printf("==========================================\n");
}

int main()
{
    int choice,gnt=0;
    struct Mon *head=NULL;

    // View of current exchanging rates (~INFO TAB)
    printf("\n");
    displayRates();

    for(;;) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Perform action for Option 1
                convertCURR(&head);
                break;

            case 2:
                // Perform action for Option 2
                displayTrans(head);
                break;

            case 3:
                // Perform action for Option 3
            {
                int num;
                printf("Enter ID of exchange: ");
                scanf("%d",&num);
                searchWithID(head,num);
             break;

            }
            case 4:
                // Perform action for Option 4
            {

                accMode(gnt);
                gnt++;
             break;

            }

            case 0:
                // Exit the program
                printf("Exiting...\n");
                return;
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        printf("\n");
    }

    return 0;
}
