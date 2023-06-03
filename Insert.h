#ifndef INSERT_H_INCLUDED
#define INSERT_H_INCLUDED

double insertExch(int id,int opt1,int opt2,double curr)
{

    double rezult=0;

//1 EUR EUR EUR EUR EUR EUR EUR EUR EUR EUR EUR EUR  EUR EUR EUR EUR EUR EUR EUR EUR

    if(opt1==1)
    {
        if(opt2==1)
        {
            printf("CANT CONVERT AT THE SAME CURRENCY");
        }
        else if(opt2==2)
        {
            rezult=curr*110.93;
            printf("The amount of %.4lf EUR converts to %.4lf LEK \n",curr,rezult);
        }
        else if(opt2==3)
        {
            rezult=curr*1.62;
            printf("The amount of %.4lf EUR converts to %.4lf AUD \n",curr,rezult);

        }
        else if(opt2==4)
        {
            rezult=curr*0.97;
            printf("The amount of %.4lf EUR converts to %.4lf CHF \n",curr,rezult);
        }
        else if(opt2==5)
        {
            rezult=curr*8.44;
            printf("The amount of %.4lf EUR converts to %.4lf HKD \n",curr,rezult);
        }
        else if(opt2==6)
        {
            rezult=curr*11.37;
            printf("The amount of %.4lf EUR converts to %.4lf SEK \n",curr,rezult);
        }
        else if(opt2==7)
        {
            rezult=curr*1.08;
            printf("The amount of %.4lf EUR converts to %.4lf USD \n",curr,rezult);
        }
        else if(opt2==8)
        {
            rezult=curr*0.868;
            printf("The amount of %.4lf EUR converts to %.4lf GBP \n",curr,rezult);
        }
        else if(opt2==9)
        {
            rezult=curr*1.458;
            printf("The amount of %.4lf EUR converts to %.4lf CAD \n",curr,rezult);
        }
        else if(opt2==10)
        {
            rezult=curr*7.57;
            printf("The amount of %.4lf EUR converts to %.4lf CNY \n",curr,rezult);
        }
        else if(opt2==11)
        {
            rezult=curr*1.72;
            printf("The amount of %.4lf EUR converts to %.4lf NZD \n",curr,rezult);
        }
        else if(opt2==12)
        {
            rezult=curr*149.07;
            printf("The amount of %.4lf EUR converts to %.4lf JPY \n",curr,rezult);
        }

    }


    //EUR EUR EUR EUR EUR EUR EUR EUR EUR EUR EUR EUR  EUR EUR EUR EUR EUR EUR EUR


    //2 LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK

    if (opt1 == 2)
    {
        // Conversion rates from LEK to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 0.0091;
            printf("The amount of %.4lf LEK converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 3)
        {
            rezult = curr *0.015;
            printf("The amount of %.4lf LEK converts to %.4lf AUD", curr, rezult);
        }
        else if (opt2 == 4)
        {
            rezult = curr * 0.0088;
            printf("The amount of %.4lf LEK converts to %.4lf CHF", curr, rezult);
        }
        else if (opt2 == 5)
        {
            rezult = curr * 0.076;
            printf("The amount of %.4lf LEK converts to %.4lf HKD", curr, rezult);
        }
        else if (opt2 == 6)
        {
            rezult = curr * 0.1064;
            printf("The amount of %.4lf LEK converts to %.4lf SEK", curr, rezult);
        }
        else if (opt2 == 7)
        {
            rezult = curr * 0.0097;
            printf("The amount of %.4lf LEK converts to %.4lf USD", curr, rezult);
        }
        else if (opt2 == 8)
        {
            rezult = curr * 0.00786;
            printf("The amount of %.4lf LEK converts to %.4lf GBP", curr, rezult);
        }
        else if (opt2 == 9)
        {
            rezult = curr * 0.013257;
            printf("The amount of %.4lf LEK converts to %.4lf CAD", curr, rezult);
        }
        else if (opt2 == 10)
        {
            rezult = curr * 0.069;
            printf("The amount of %.4lf LEK converts to %.4lf CNY", curr, rezult);
        }
        else if (opt2 == 11)
        {
            rezult = curr * 0.0162;
            printf("The amount of %.4lf LEK converts to %.4lf NZD", curr, rezult);
        }
        else if (opt2 == 12)
        {
            rezult = curr * 1.3599;
            printf("The amount of %.4lf LEK converts to %.4lf JPY", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }


    //LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK LEK



    //3 AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD

    if (opt1 == 3)
    {
        // Conversion rates from AUD to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 0.60745;
            printf("The amount of %.4lf AUD converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 2)
        {
            rezult = curr * 66.656;
            printf("The amount of %.4lf AUD converts to %.4lf LEK", curr, rezult);
        }
        else if (opt2 == 4)
        {
            rezult = curr * 0.59;
            printf("The amount of %.4lf AUD converts to %.4lf CHF", curr, rezult);
        }
        else if (opt2 == 5)
        {
            rezult = curr * 5.074;
            printf("The amount of %.4lf AUD converts to %.4lf HKD", curr, rezult);
        }
        else if (opt2 == 6)
        {
            rezult = curr * 7.09;
            printf("The amount of %.4lf AUD converts to %.4lf SEK", curr, rezult);
        }
        else if (opt2 == 7)
        {
            rezult = curr * 0.6478;
            printf("The amount of %.4lf AUD converts to %.4lf USD", curr, rezult);
        }
        else if (opt2 == 8)
        {
            rezult = curr * 0.52438;
            printf("The amount of %.4lf AUD converts to %.4lf GBP", curr, rezult);
        }
        else if (opt2 == 9)
        {
            rezult = curr * 0.88339;
            printf("The amount of %.4lf AUD converts to %.4lf CAD", curr, rezult);
        }
        else if (opt2 == 10)
        {
            rezult = curr * 4.6045;
            printf("The amount of %.4lf AUD converts to %.4lf CNY", curr, rezult);
        }
        else if (opt2 == 11)
        {
            rezult = curr * 1.0798;
            printf("The amount of %.4lf AUD converts to %.4lf NZD", curr, rezult);
        }
        else if (opt2 == 12)
        {
            rezult = curr * 90.63;
            printf("The amount of %.4lf AUD converts to %.4lf JPY", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }


    //AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD AUD




    //4 CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF
    if (opt1 == 4)
    {
        // Conversion rates from CHF to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 1.02936;
            printf("The amount of %.4lf CHF converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 2)
        {
            rezult = curr * 112.8921;
            printf("The amount of %.4lf CHF converts to %.4lf LEK", curr, rezult);
        }
        else if (opt2 == 3)
        {
            rezult = curr *1.6945;
            printf("The amount of %.4lf CHF converts to %.4lf AUD", curr, rezult);
        }
        else if (opt2 == 5)
        {
            rezult = curr * 8.5977;
            printf("The amount of %.4lf CHF converts to %.4lf HKD", curr, rezult);
        }
        else if (opt2 == 6)
        {
            rezult = curr * 12.0182;
            printf("The amount of %.4lf CHF converts to %.4lf SEK", curr, rezult);
        }
        else if (opt2 == 7)
        {
            rezult = curr * 1.0975;
            printf("The amount of %.4lf CHF converts to %.4lf USD", curr, rezult);
        }
        else if (opt2 == 8)
        {
            rezult = curr * 0.8884;
            printf("The amount of %.4lf CHF converts to %.4lf GBP", curr, rezult);
        }
        else if (opt2 == 9)
        {
            rezult = curr * 1.4968;
            printf("The amount of %.4lf CHF converts to %.4lf CAD", curr, rezult);
        }
        else if (opt2 == 10)
        {
            rezult = curr * 7.803345;
            printf("The amount of %.4lf CHF converts to %.4lf CNY", curr, rezult);
        }
        else if (opt2 == 11)
        {
            rezult = curr * 1.8296;
            printf("The amount of %.4lf CHF converts to %.4lf NZD", curr, rezult);
        }
        else if (opt2 == 12)
        {
            rezult = curr * 153.591;
            printf("The amount of %.4lf CHF converts to %.4lf JPY", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }



    //CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF CHF








    //5 HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD

    if (opt1 == 5)
    {
        // Conversion rates from HKD to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 0.11971;
            printf("The amount of %.4lf HKD converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 2)
        {
            rezult = curr * 13.1358;
            printf("The amount of %.4lf HKD converts to %.4lf LEK", curr, rezult);
        }
        else if (opt2 == 3)
        {
            rezult = curr * 0.19707;
            printf("The amount of %.4lf HKD converts to %.4lf AUD", curr, rezult);
        }
        else if (opt2 == 4)
        {
            rezult = curr * 0.11628;
            printf("The amount of %.4lf HKD converts to %.4lf CHF", curr, rezult);
        }
        else if (opt2 == 6)
        {
            rezult = curr * 1.3985;
            printf("The amount of %.4lf HKD converts to %.4lf SEK", curr, rezult);
        }
        else if (opt2 == 7)
        {
            rezult = curr * 0.12765;
            printf("The amount of %.4lf HKD converts to %.4lf USD", curr, rezult);
        }
        else if (opt2 == 8)
        {
            rezult = curr * 0.10332;
            printf("The amount of %.4lf HKD converts to %.4lf GBP", curr, rezult);
        }
        else if (opt2 == 9)
        {
            rezult = curr * 0.1741;
            printf("The amount of %.4lf HKD converts to %.4lf CAD", curr, rezult);
        }
        else if (opt2 == 10)
        {
            rezult = curr * 0.9071;
            printf("The amount of %.4lf HKD converts to %.4lf CNY", curr, rezult);
        }
        else if (opt2 == 11)
        {
            rezult = curr * 0.21271;
            printf("The amount of %.4lf HKD converts to %.4lf NZD", curr, rezult);
        }
        else if (opt2 == 12)
        {
            rezult = curr *17.861;
            printf("The amount of %.4lf HKD converts to %.4lf JPY", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }

    //HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD HKD







    //6 SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK

    if (opt1 == 6)
    {
        // Conversion rates from SEK to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 0.8559;
            printf("The amount of %.4lf SEK converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 2)
        {
            rezult = curr * 9.3896;
            printf("The amount of %.4lf SEK converts to %.4lf LEK", curr, rezult);
        }
        else if (opt2 == 3)
        {
            rezult = curr * 0.1409;
            printf("The amount of %.4lf SEK converts to %.4lf AUD", curr, rezult);
        }
        else if (opt2 == 4)
        {
            rezult = curr * 0.8316;
            printf("The amount of %.4lf SEK converts to %.4lf CHF", curr, rezult);
        }
        else if (opt2 == 5)
        {
            rezult = curr * 0.7154;
            printf("The amount of %.4lf SEK converts to %.4lf HKD", curr, rezult);
        }
        else if (opt2 == 7)
        {
            rezult = curr * 0.09132;
            printf("The amount of %.4lf SEK converts to %.4lf USD", curr, rezult);
        }
        else if (opt2 == 8)
        {
            rezult = curr * 0.0739;
            printf("The amount of %.4lf SEK converts to %.4lf GBP", curr, rezult);
        }
        else if (opt2 == 9)
        {
            rezult = curr * 0.12455;
            printf("The amount of %.4lf SEK converts to %.4lf CAD", curr, rezult);
        }
        else if (opt2 == 10)
        {
            rezult = curr * 0.64913;
            printf("The amount of %.4lf SEK converts to %.4lf CNY", curr, rezult);
        }
        else if (opt2 == 11)
        {
            rezult = curr * 0.1522;
            printf("The amount of %.4lf SEK converts to %.4lf NZD", curr, rezult);
        }
        else if (opt2 == 12)
        {
            rezult = curr * 12.781;
            printf("The amount of %.4lf SEK converts to %.4lf JPY", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }


    //SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK SEK














    //7 USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD

    if (opt1 == 7)
    {
        // Conversion rates from USD to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 0.9371;
            printf("The amount of %.4lf USD converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 2)
        {
            rezult = curr * 102.8;
            printf("The amount of %.4lf USD converts to %.4lf LEK", curr, rezult);
        }
        else if (opt2 == 3)
        {
            rezult = curr * 1.543;
            printf("The amount of %.4lf USD converts to %.4lf AUD", curr, rezult);
        }
        else if (opt2 == 4)
        {
            rezult = curr * 0.911;
            printf("The amount of %.4lf USD converts to %.4lf CHF", curr, rezult);
        }
        else if (opt2 == 5)
        {
            rezult = curr * 7.834;
            printf("The amount of %.4lf USD converts to %.4lf HKD", curr, rezult);
        }
        else if (opt2 == 6)
        {
            rezult = curr * 10.941;
            printf("The amount of %.4lf USD converts to %.4lf SEK", curr, rezult);
        }
        else if (opt2 == 8)
        {
            rezult = curr * 0.809;
            printf("The amount of %.4lf USD converts to %.4lf GBP", curr, rezult);
        }
        else if (opt2 == 9)
        {
            rezult = curr * 1.364;
            printf("The amount of %.4lf USD converts to %.4lf CAD", curr, rezult);
        }
        else if (opt2 == 10)
        {
            rezult = curr * 7.105;
            printf("The amount of %.4lf USD converts to %.4lf CNY", curr, rezult);
        }
        else if (opt2 == 11)
        {
            rezult = curr * 1.666;
            printf("The amount of %.4lf USD converts to %.4lf NZD", curr, rezult);
        }
        else if (opt2 == 12)
        {
            rezult = curr * 139.9;
            printf("The amount of %.4lf USD converts to %.4lf JPY", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }


    //USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD USD










    //8 GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP

    if (opt1 == 8)
    {
        // Conversion rates from GBP to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 1.159;
            printf("The amount of %.4lf GBP converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 2)
        {
            rezult = curr * 127.08;
            printf("The amount of %.4lf GBP converts to %.4lf LEK", curr, rezult);
        }
        else if (opt2 == 3)
        {
            rezult = curr * 1.908;
            printf("The amount of %.4lf GBP converts to %.4lf AUD", curr, rezult);
        }
        else if (opt2 == 4)
        {
            rezult = curr * 1.127;
            printf("The amount of %.4lf GBP converts to %.4lf CHF", curr, rezult);
        }
        else if (opt2 == 5)
        {
            rezult = curr * 9.688;
            printf("The amount of %.4lf GBP converts to %.4lf HKD", curr, rezult);
        }
        else if (opt2 == 6)
        {
            rezult = curr * 13.532;
            printf("The amount of %.4lf GBP converts to %.4lf SEK", curr, rezult);
        }
        else if (opt2 == 7)
        {
            rezult = curr * 1.237;
            printf("The amount of %.4lf GBP converts to %.4lf USD", curr, rezult);
        }
        else if (opt2 == 9)
        {
            rezult = curr * 1.687;
            printf("The amount of %.4lf GBP converts to %.4lf CAD", curr, rezult);
        }
        else if (opt2 == 10)
        {
            rezult = curr * 8.787;
            printf("The amount of %.4lf GBP converts to %.4lf CNY", curr, rezult);
        }
        else if (opt2 == 11)
        {
            rezult = curr * 2.06;
            printf("The amount of %.4lf GBP converts to %.4lf NZD", curr, rezult);
        }
        else if (opt2 == 12)
        {
            rezult = curr * 173.01;
            printf("The amount of %.4lf GBP converts to %.4lf JPY", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }


    //GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP GBP








    //9 CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD

    if (opt1 == 9)
    {
        // Conversion rates from CAD to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 0.6871 ;
            printf("The amount of %.4lf CAD converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 2)
        {
            rezult = curr * 75.3778 ;
            printf("The amount of %.4lf CAD converts to %.4lf LEK", curr, rezult);
        }
        else if (opt2 == 3)
        {
            rezult = curr * 1.1315;
            printf("The amount of %.4lf CAD converts to %.4lf AUD", curr, rezult);
        }
        else if (opt2 == 4)
        {
            rezult = curr * 0.66823;
            printf("The amount of %.4lf CAD converts to %.4lf CHF", curr, rezult);
        }
        else if (opt2 == 5)
        {
            rezult = curr * 5.7433;
            printf("The amount of %.4lf CAD converts to %.4lf HKD", curr, rezult);
        }
        else if (opt2 == 6)
        {
            rezult = curr * 8.0232;
            printf("The amount of %.4lf CAD converts to %.4lf SEK", curr, rezult);
        }
        else if (opt2 == 7)
        {
            rezult = curr * 0.7332;
            printf("The amount of %.4lf CAD converts to %.4lf USD", curr, rezult);
        }
        else if (opt2 == 8)
        {
            rezult = curr * 0.593;
            printf("The amount of %.4lf CAD converts to %.4lf GBP", curr, rezult);
        }
        else if (opt2 == 10)
        {
            rezult = curr * 5.2093;
            printf("The amount of %.4lf CAD converts to %.4lf CNY", curr, rezult);
        }
        else if (opt2 == 11)
        {
            rezult = curr * 1.1221;
            printf("The amount of %.4lf CAD converts to %.4lf NZD", curr, rezult);
        }
        else if (opt2 == 12)
        {
            rezult = curr * 102.551;
            printf("The amount of %.4lf CAD converts to %.4lf JPY", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }



    //CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD CAD







    //10 CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY

    if (opt1 == 10)
    {
        // Conversion rates from CNY to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 0.1319;
            printf("The amount of %.4lf CNY converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 2)
        {
            rezult = curr * 14.469;
            printf("The amount of %.4lf CNY converts to %.4lf LEK", curr, rezult);
        }
        else if (opt2 == 3)
        {
            rezult = curr * 0.2172;
            printf("The amount of %.4lf CNY converts to %.4lf AUD", curr, rezult);
        }
        else if (opt2 == 4)
        {
            rezult = curr * 0.12827;
            printf("The amount of %.4lf CNY converts to %.4lf CHF", curr, rezult);
        }
        else if (opt2 == 5)
        {
            rezult = curr * 1.1023;
            printf("The amount of %.4lf CNY converts to %.4lf HKD", curr, rezult);
        }
        else if (opt2 == 6)
        {
            rezult = curr * 1.5394;
            printf("The amount of %.4lf CNY converts to %.4lf SEK", curr, rezult);
        }
        else if (opt2 == 7)
        {
            rezult = curr * 0.14071;
            printf("The amount of %.4lf CNY converts to %.4lf USD", curr, rezult);
        }
        else if (opt2 == 8)
        {
            rezult = curr * 0.1138;
            printf("The amount of %.4lf CNY converts to %.4lf GBP", curr, rezult);
        }
        else if (opt2 == 9)
        {
            rezult = curr * 0.1920;
            printf("The amount of %.4lf CNY converts to %.4lf CAD", curr, rezult);
        }
        else if (opt2 == 11)
        {
            rezult = curr * 0.2343;
            printf("The amount of %.4lf CNY converts to %.4lf NZD", curr, rezult);
        }
        else if (opt2 == 12)
        {
            rezult = curr * 19.6878;
            printf("The amount of %.4lf CNY converts to %.4lf JPY", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }


    //CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY CNY









    //11 NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD

    if (opt1 == 11)
    {
        // Conversion rates from NZD to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 0.5626;
            printf("The amount of %.4lf NZD converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 2)
        {
            rezult = curr * 61.7233;
            printf("The amount of %.4lf NZD converts to %.4lf LEK", curr, rezult);
        }
        else if (opt2 == 3)
        {
            rezult = curr * 0.9267;
            printf("The amount of %.4lf NZD converts to %.4lf AUD", curr, rezult);
        }
        else if (opt2 == 4)
        {
            rezult = curr * 0.54712;
            printf("The amount of %.4lf NZD converts to %.4lf CHF", curr, rezult);
        }
        else if (opt2 == 5)
        {
            rezult = curr * 4.7065;
            printf("The amount of %.4lf NZD converts to %.4lf HKD", curr, rezult);
        }
        else if (opt2 == 6)
        {
            rezult = curr * 6.5702;
            printf("The amount of %.4lf NZD converts to %.4lf SEK", curr, rezult);
        }
        else if (opt2 == 7)
        {
            rezult = curr * 0.601;
            printf("The amount of %.4lf NZD converts to %.4lf USD", curr, rezult);
        }
        else if (opt2 == 8)
        {
            rezult = curr * 0.4861;
            printf("The amount of %.4lf NZD converts to %.4lf GBP", curr, rezult);
        }
        else if (opt2 == 9)
        {
            rezult = curr * 0.8196;
            printf("The amount of %.4lf NZD converts to %.4lf CAD", curr, rezult);
        }
        else if (opt2 == 10)
        {
            rezult = curr * 4.2697;
            printf("The amount of %.4lf NZD converts to %.4lf CNY", curr, rezult);
        }
        else if (opt2 == 12)
        {
            rezult = curr * 84.0522;
            printf("The amount of %.4lf NZD converts to %.4lf JPY", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }


    //NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD NZD









    //12 JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY

    if (opt1 == 12)
    {
        // Conversion rates from JPY to other currencies
        if (opt2 == 1)
        {
            rezult = curr * 0.0067;
            printf("The amount of %.4lf JPY converts to %.4lf EUR", curr, rezult);
        }
        else if (opt2 == 2)
        {
            rezult = curr * 0.735;
            printf("The amount of %.4lf JPY converts to %.4lf LEK", curr, rezult);
        }
        else if (opt2 == 3)
        {
            rezult = curr * 0.01103;
            printf("The amount of %.4lf JPY converts to %.4lf AUD", curr, rezult);
        }
        else if (opt2 == 4)
        {
            rezult = curr * 0.00651;
            printf("The amount of %.4lf JPY converts to %.4lf CHF", curr, rezult);
        }
        else if (opt2 == 5)
        {
            rezult = curr * 0.0559;
            printf("The amount of %.4lf JPY converts to %.4lf HKD", curr, rezult);
        }
        else if (opt2 == 6)
        {
            rezult = curr * 0.07815;
            printf("The amount of %.4lf JPY converts to %.4lf SEK", curr, rezult);
        }
        else if (opt2 == 7)
        {
            rezult = curr * 0.00714;
            printf("The amount of %.4lf JPY converts to %.4lf USD", curr, rezult);
        }
        else if (opt2 == 8)
        {
            rezult = curr * 0.00578;
            printf("The amount of %.4lf JPY converts to %.4lf GBP", curr, rezult);
        }
        else if (opt2 == 9)
        {
            rezult = curr * 0.00975;
            printf("The amount of %.4lf JPY converts to %.4lf CAD", curr, rezult);
        }
        else if (opt2 == 10)
        {
            rezult = curr * 0.051;
            printf("The amount of %.4lf JPY converts to %.4lf CNY", curr, rezult);
        }
        else if (opt2 == 11)
        {
            rezult = curr * 0.011899;
            printf("The amount of %.4lf JPY converts to %.4lf NZD", curr, rezult);
        }
        else
        {
            printf("Invalid option for opt2");
        }
    }

   return rezult;

    //JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY JPY
}
#endif // INSERT_H_INCLUDED


