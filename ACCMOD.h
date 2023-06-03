#ifndef ACCMOD_H_INCLUDED
#define ACCMOD_H_INCLUDED
void listOfcur()
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
void convertMon(double dep)
{
    printf("Your deposit is: ");
    printf("%lf",dep);
     printf("\n");

}

double enterDep(char name [],char surname [])
{
    int opt;
    double dep;


    printf("Enter name: ");
    scanf("%s",&name);
    printf("Enter surname: ");
    scanf("%s",&surname);


    listOfcur();
    printf("Choose the currency: ");
    scanf("%d",&opt);

    printf("Enter the amount you want to deposit: ");
    scanf("%lf",&dep);
    printf("\n");

    return dep;

}

void accMenu()
{
    printf("==================== MENU ================\n");
    printf("=     1. Enter Deposit                   =\n");
    printf("=     2. Convert money                   =\n");
    printf("=     3. See Balance                     =\n");
    printf("=     4. Remove Account                  =\n");
    printf("=     0. Exit                            =\n");
    printf("==========================================\n");
}

void accMode()
{
    int opp;
    int cnt=0;
    char name [20];
    char surname [20];
    double dep=0;

    for(;;)
    {
        accMenu();
        printf("Enter option: ");
        scanf("%d",&opp);

        switch(opp)
        {
        case 1:
        {
            // Perform action for Opp 1

            if(cnt==0)
            {
                dep=enterDep(name,surname);
                cnt++;
            }
            else
            {
                printf("Account already created. \n");
            }

            break;
        }

        case 2:
            // Perform action for Opp 2
            convertMon(dep);
            break;

        case 3:
            // Perform action for Opp 3
        {
            break;

        }

        case 0:
            // Exit the program
            printf("Going back ...\n");
            return;
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
}


#endif // ACCMOD_H_INCLUDED
