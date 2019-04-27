#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <curses.h>
int currency,comparison,startorExit;
double money;
void firstCurr (int);
void secondCurr (int);
int main()

{
    printf("THE CONVERSTION AVAILABLE ARE:\n ## US dollar\n #rupiah \n #ruble \n #yen \n #yuan \n #euro \n #pounds\n\n");
    
    printf("Do you want to start this program\nType y to start or any other key to quit\n");
    char StartProg;
    scanf("%c",&StartProg);
    bool StartPrograms;
    if(StartProg=='y'){
        StartPrograms=true;
    }
    
    
    
    while(StartPrograms==true){
    printf("Please type 10 to start and 0 to exit \n and these numbers to choose the currency:\n 1 = US dollar\n 2 = Rupiah \n 3 = Yen \n 4 = Yuan \n 5 = Euro \n 6 = Pounds\n 7 = Ruble \n\n");
    scanf("%d",&startorExit);
    if(startorExit==0)break; //to exit loop as well as program//
    else if(startorExit==10){
    printf ("Please enter a currency\n");
    scanf("%d",&currency);
    firstCurr(currency);
    printf("please enter the value of the money you want to convert\n");
    scanf("%lf",&money);
    printf("Please enter another currency\n");
    scanf ("%d",&comparison);
    secondCurr(comparison);
        
       //USD//
    float valueUsdr,valuerUsd,valueUsdy,valueyUsd,valueUsdyu,valueyuUSD,valueUsEU,valueEUUs,valueUSPo,valuePoUS,valueUSru,valueRUUS;
    valueUsdr = money*13330;
    valuerUsd = money/13330;
    valueUsdy = money*102;
    valueyUsd = money/102;
    valueUsdyu = money*6.68;
    valueyuUSD = money/6.68;
    valueUsEU = money*0.90;
    valueEUUs = money/0.90;
    valueUSPo = money*0.74;
    valuePoUS = money/0.74;
    valueUSru = money*65.07;
    valueRUUS = money/65.07;
    //FROM USD//
    if (comparison==2&&currency==1){printf("the value is %lf\n",valueUsdr);}
    else if(comparison==1&&currency==2){printf("the value is %lf\n",valuerUsd);}
    else if(comparison==3&&currency==1){printf("the value is %lf\n",valueUsdy);}
    else if(comparison==1&&currency==3){printf("the value is %lf\n",valueyUsd);}
    else if(comparison==1&&currency==4){printf("the value is %lf\n",valueUsdyu);}
    else if(comparison==4&&currency==1){printf("the value is %lf\n",valueyuUSD);}
    else if(comparison==5&&currency==1){printf("the value is %lf\n",valueUsEU);}
    else if(comparison==1&&currency==5){printf("the value is %lf\n",valueEUUs);}
    else if(comparison==6&&currency==1){printf("the value is %lf\n",valueUSPo);}
    else if(comparison==1&&currency==6){printf("the value is %lf\n",valuePoUS);}
    else if(comparison==7&&currency==1){printf("the value is %lf\n",valueUSru);}
    else if(comparison==1&&currency==7){printf("the value is %lf\n",valueRUUS);}
    else if(comparison==1&&currency==1){printf("you will convert into the same currency,\nplease read the instruction above");}
    //RUPIAH//
    float valueruYen,valueYenru,valueRuyuan,valueYuanru,valueRueur,valueEurru,valueRupo,valuePoru,valueRurub,valueRubru;
    valueruYen = money/133.08;
    valueYenru = money*133.08;
    valueRuyuan = money/2031.53;
    valueYuanru = money*2031.53;
    valueRueur = money/14864.73;
    valueEurru = money*14864.73;
    valueRupo = money/17839.73;
    valuePoru = money*16839.63;
    valueRurub = money/207.18;
    valueRubru = money*207.18;
    //FROM RUPIAH//
    if(currency==2&&comparison==2){printf("you will convert into the same currency,\nplease read the instruction above");}
    else if(currency==2&&comparison==3){printf("the value is %lf\n",valueruYen);}
    else if(currency==3&&comparison==2){printf("the value is %lf\n",valueYenru);}
    else if(currency==2&&comparison==4){printf("the value is %lf\n",valueRuyuan);}
    else if(currency==4&&comparison==2){printf("the value is %lf\n",valueYuanru);}
    else if(currency==2&&comparison==5){printf("the value is %lf\n",valueRueur);}
    else if(currency==5&&comparison==2){printf("the value is %lf\n",valueEurru);}
    else if(currency==2&&comparison==6){printf("the value is %lf\n",valueRupo);}
    else if(currency==6&&comparison==2){printf("the value is %lf\n",valuePoru);}
    else if(currency==2&&comparison==7){printf("the value is %lf\n",valueRurub);}
    else if(currency==7&&comparison==2){printf("the value is %lf\n",valueRubru);}
    //YEN//
    float valueYenyu,valueYuanyen,valueYeneuro,valueEuroyen,valueYenPound,valuePoundyen,valueYenruble,valueRubleYen;
    valueYenyu=money/15.27;
    valueYuanyen=money*15.27;
    valueYeneuro=money/111.70;
    valueEuroyen=money*111.70;
    valueYenPound=money/134.05;
    valuePoundyen=money*134.05;
    valueYenruble=money/1.57;
    valueRubleYen=money*1.57;
    //FROM YEN//
    if(currency==3&&comparison==3){printf("you will convert into the same currency,\nplease read the instruction above");}
    else if(currency==3&&comparison==4){printf("the value is %lf\n",valueYenyu);}
    else if(currency==4&&comparison==3){printf("the value is %lf\n",valueYuanyen);}
    else if(currency==3&&comparison==5){printf("the value is %lf\n",valueYeneuro);}
    else if(currency==5&&comparison==3){printf("the value is %lf\n",valueEuroyen);}
    else if(currency==3&&comparison==6){printf("the value is %lf\n",valueYenPound);}
    else if(currency==6&&comparison==3){printf("the value is %lf\n",valuePoundyen);}
    else if(currency==3&&comparison==7){printf("the value is %lf\n",valueYenruble);}
    else if(currency==7&&comparison==3){printf("the value is %lf\n",valueRubleYen);}
    //YUAN//
    float valueYuanEuro,valueEuroYuan,valueYuanPound,valuePoundYuan,valueYuanRuble,valueRubleYuan;
    valueYuanEuro=money/7.32;
    valueEuroYuan=money*7.32;
    valueYuanPound=money/8.78;
    valuePoundYuan=money*8.78;
    valueYuanRuble=money*9.81;
    valueRubleYuan=money/9.81;
    //FROM YUAN//
    if(currency==4&&comparison==4){printf("you will convert into the same currency,\nplease read the instruction above");}
    else if(currency==4&&comparison==5){printf("the value is %lf\n",valueYuanEuro);}
    else if(currency==5&&comparison==4){printf("the value is %lf\n",valueEuroYuan);}
    else if(currency==4&&comparison==6){printf("the value is %lf\n",valueYuanPound);}
    else if(currency==6&&comparison==4){printf("the value is %lf\n",valuePoundYuan);}
    else if(currency==4&&comparison==7){printf("the value is %lf\n",valueYuanRuble);}
    else if(currency==7&&comparison==4){printf("the value is %lf\n",valueRubleYuan);}
    //EURO//
    float EuroPound,PoundEuro,EuroRuble,RubleEuro;
    EuroPound=money/1.20;
    PoundEuro=money*1.20;
    EuroRuble=money*71.75;
    RubleEuro=money/71.75;
    //FROM EURO//
    if(currency==5&&comparison==5){printf("you will convert into the same currency,\nplease read the instruction above");}
    else if(currency==5&&comparison==6){printf("the value is %lf\n",EuroPound);}
    else if(currency==6&&comparison==5){printf("the value is %lf\n",PoundEuro);}
    else if(currency==5&&comparison==7){printf("the value is %lf\n",EuroRuble);}
    else if(currency==7&&comparison==5){printf("the value is %lf\n",RubleEuro);}
    //POUNDS//
    float PoundsRuble,RublePounds;
    PoundsRuble=money*86.35;
    RublePounds=money/86.35;
    //FROM POUNDS//
    if(currency==6&&comparison==6){printf("you will convert into the same currency,\nplease read the instruction above");}
        else if(currency==6&&comparison==7){printf("the value is %lf\n",PoundsRuble);}
        else if(currency==7&&comparison==6){printf("the value is %lf\n",RublePounds);}
        }
    }
      printf("\n\n*** Good bye ***\n");
}


void firstCurr(int currency){
    if (currency ==1){printf("US dollar\n");}
    else if (currency ==2){printf("rupiah\n");}
    else if (currency ==3){printf("yen\n");}
    else if (currency ==4){printf("yuan\n");}
    else if (currency ==5){printf("euro\n");}
    else if (currency ==6){printf("pounds\n");}
    else if (currency ==7){printf("ruble\n");}
    else {printf("invalid input please read instruction above");}
    

}
void secondCurr(int comparison){
    switch(comparison){
        case 1: printf("you will convert to US dollar\n");
            break;
        case 2: printf("you will convert to rupiah\n");
            break;
        case 3: printf("you will convert to yen \n");
            break;
        case 4: printf ("you will convert to yuan\n");
            break;
        case 5: printf("you will convert to euro\n");
            break;
        case 6: printf("you will convert to pounds\n");
            break;
        case 7: printf("you will convert to ruble\n");
            break;
        default: printf("invalid input please read instruction above");
    }}

