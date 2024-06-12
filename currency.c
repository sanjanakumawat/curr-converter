#include<stdio.h>
void currencyConvert(int value){
    float dollarValue;
    printf("Enter how much dollar you have\t");
    scanf("%f" , &dollarValue);
    switch(value)
    {
    case 1:
        printf("Euro(EUR) value of %0.2f dallar is %0.2f \n", dollarValue,(dollarValue*0.99));
        break;
    case 2:
        printf("pound sterling(GBP) value of %0.2f dallar is %0.2f \n", dollarValue,(dollarValue*0.86));
        break;
    case 3:
        printf("australian dollor(AUD) value of %0.2f dallar is %0.2f \n", dollarValue,(dollarValue*1.53));
        break;
    case 4:
        printf("canadian dollar(CAD) value of %0.2f dallar is %0.2f \n", dollarValue,(dollarValue*1.34));
        break;
    case 5:
        printf("swiss france(CHF) value of %0.2f dallar is %0.2f \n", dollarValue,(dollarValue*0.98));
        break;
    case 6:
        printf("Indian(INR) value of %0.2f dallar is %0.2f \n", dollarValue,(dollarValue*81.31));
        break;  
    default:
        printf("please enter valid input\n");
        break;
    }
}

int main(){
    printf("currency convertor..............\n\n");
    int userInput , select;
    again:
    printf("1. dollar to euro(EUR)\n");
    printf("2. dollar to pound sterling(GBP)\n");
    printf("3. dollar to australian dollor(AUD)\n");
    printf("4. dollar to canadian dollar(CAD)\n");
    printf("5. dollar to swiss france(CHF)\n");
    printf("6. dollar to Indian(INR)\n");
    scanf("%d", &userInput);
    printf("\n");
    currencyConvert(userInput);
    printf("\n");
    // to continue in loop we use lables
    printf("If you want to continue then enter 1 else enter 0\n ");
    scanf("%d",&select);
    if(select == 1)
    {
        goto again;
    }else{
        printf("Thanks....");
    }   
}