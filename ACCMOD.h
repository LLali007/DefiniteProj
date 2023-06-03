#ifndef ACCMOD_H_INCLUDED
#define ACCMOD_H_INCLUDED
#include <string.h>
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
int opti;

void displayBal (double dep,double conn)
{
    double rrez=0;
    char mone [10];

    printf("Your deposit is: ");
    printf("%.2lf",dep-conn);
    printf("\n");


    switch(opti)
    {
     case 1:
        strcpy(mone,"EUR");
        break;
    case 2:
        strcpy(mone,"LEK");
        break;

    case 3:
        strcpy(mone,"AUD");
        break;

    case 4:
        strcpy(mone,"CHF");
        break;

    case 5:
        strcpy(mone,"HKD");
        break;
    case 6:
        strcpy(mone,"SEK");
        break;
    case 7:
        strcpy(mone,"USD");
        break;
    case 8:
        strcpy(mone,"GBP");
        break;
    case 9:
        strcpy(mone,"CAD");
        break;
    case 10:
        strcpy(mone,"CNY");
        break;
    case 11:
        strcpy(mone,"NZD");
        break;
    case 12:
        strcpy(mone,"JPY");
        break;
    }
    printf("Curr: %s",mone);
    printf("\n");
}

double enterDep(char name [])
{
    int i=0;
    double dep;
    char ch;
    char psw [30];

    printf("Enter username: ");
    scanf("%s",&name);
    printf("Enter password: ");
    while((ch=_getch())!=13)
    {
        psw[i]=ch;
        i++;
        printf("*");
    }
    psw[i]='\0';
    printf("\n");


    printf("Your password: %s \n",psw);




    listOfcur();
    printf("Choose the currency: ");
    scanf("%d",&opti);

    printf("Enter the amount you want to deposit: ");
    scanf("%lf",&dep);
    printf("\n");

    return dep;

}
double withdrawMon(double dep)
{
    double withd;
    printf("Your deposit is: ");
    printf("%lf",dep);
    printf("\n");
    printf("Withdraw thr amount: ");
    scanf("%lf",&withd);
    if(withd>dep)
    {
        printf("Invalid withdraw. \n");
        return;
    }
    dep=dep-withd;
    printf("\n");


return withd;

}

void accMenu()
{
    printf("=================== MENU =================\n");
    printf("=     1. Enter Deposit                   =\n");
    printf("=     2. Withdraw money                  =\n");
    printf("=     3. See Balance                     =\n");
    printf("=     4. Remove Account                  =\n");
    printf("=     0. Exit                            =\n");
    printf("==========================================\n");
}

void accMode(int gnt)
{
    int opp;
    int cnt=0;
    char name [20];
    char surname [20];
    double conn=0,dep=0;

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
                dep=enterDep(name);
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
            conn=withdrawMon(dep);
                   break;

        case 3:
            // Perform action for Opp 3
        {
            displayBal(dep,conn);
            break;

        }
        case 4:
            // Perform action for Opp 4
        {
            cnt--;
            printf("Account removed. \n");
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
