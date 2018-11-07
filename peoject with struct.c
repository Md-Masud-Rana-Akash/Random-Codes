#include<stdio.h>

int main(){
struct account_holder_info{
char address[55],name[20],name2[20],name3[20],name4[20];
int age;}user;
int choice,choice2,i,age,account_number,year;
float money,total,vaild_money,money2;


printf("                           WELCOME TO OUR BANK\n");
printf("\nHOW CAN I HELP YOU SIR? PLEASE PRESS YOUR CHOICE\n\n1 FOR OPEN A NEW ACCOUNT \n2 FOR CASH IN AND \n3 FOR CASH OUT\n4 FOR LOAN APPLICATION\n5 FOR DEPOSITE MONEY\n");
scanf("%d",&choice);

if(choice==1){

    printf("What is your name?");
    gets(user.name);
    printf("What is your age?");
    gets(user.age);
    printf("What is your address?");
    gets(user.address);
    printf("What is your father name?");
    gets(user.name2);
    printf("What is your mother name?");
    gets(user.name3);
    printf("what is your Nommine name?");
    gets(user.name4);
    printf("Congratulation sir your account is created successfully\nYour account number is 001\n");
    printf("Do you want to cash in some money on your account sir?\nPress your choice 1 for cash in some money and \n2 for Log out\n");
     scanf("%d",&choice);
      if(choice==1){
        printf("How much money do you want to cash in sir?");
        scanf("%f",&money);
        printf("Your current balance is %f\n Thank you sir for using our service",money);}
      else if(choice==2)
        printf("Thank you for using our service sir");
        else printf("error");}

else if(choice==2){

    printf("Your account number");
    scanf("%d",&account_number);
    printf("Current balance of your account is 0.00\n");
    printf("How much money do you want to cash in?");
    scanf("%f",&money);
    printf("Your cash in successfull sir and your current balance is %f\n",money);
    printf("Thank you sir for using our service");}


else if(choice==3){
    printf("Your account number");
    scanf("%d",&account_number);
    printf("Your current money in the account");
    scanf("%f",&money);
    printf("How much money do you want to cash out?");
    scanf("%f",&money2);
    vaild_money=money-money2;
    printf("Cash out successfull\nyour current money is %f\n",vaild_money);
    printf("Thank You Sir for using our service,have a good day");}

else if(choice==4){
    printf("Do you have any account in our bank sir?\nEnter your choice press 1 for if you  have a account\n or press 2 if you dont have a account\n");
    scanf("%d",&choice);
    if(choice==1){
            printf("How much money do you have on your account now?\n");
            scanf("%f",&money);
                    printf("How much money do you want for loan");
                    scanf("%f",&money2);
                if((money>=10000)&&(money2<money)){
                    printf("Your account number");
                    scanf("%d",&account_number);
                    printf("Your request for the loan is successfull");}
                else
                    printf("Sorry sir you can't apply for a loan because you don't have sufficiant money for applying aloan\n");}
    else
                printf("Sorry sir you can't apply for a loan because you dont have an account on our bank\nFirst creat an account then try again,Thank you Sir\n");}

else if(choice==5){
    printf("Yor account number");
    scanf("%d",&account_number);
    printf("How much money do you have on your account now");
    scanf("%f",&money);
    printf("How much money do you want to deposite");
    scanf("%f",&money2);

    if(money>money2){
             printf("For how many year");
            scanf("%d",&year);
        float int_rate,sum,total;
        total=0;

        for(i=1;i<=year;i++){
        int_rate=money2*0.1;
        sum=int_rate*12*year;
        total=money2+sum;}
        printf("Your money with for %d year will be %f",year,total);}
    else
        printf("Sorry your current balance is unsufficient for the loan");}
else printf("INVALID INPUT");

return 0;}
