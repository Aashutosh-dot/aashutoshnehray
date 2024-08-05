#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rand(void);

int main()
{
    //Create account user input
    int r = rand();
    char firstn[100], lastn[100], email[100];
    int pin=0;
    double num=0;
    printf("Enter the first name:\n");
    scanf("%s", firstn);
    printf("Enter the last name:\n");
    scanf("%s", lastn);
    printf("Enter your email:\n");
    scanf("%s", email);
    printf("Enter your mobile number:\n");
    scanf("%lf", &num);
    printf("Select the 4-digit pin for this account:\n");
    scanf("%d", &pin);


    //Show info
    printf("\n\n\nWelcome!\n");
    printf("Your account info is:\n");
    printf("First name: %s\n",firstn);
    printf("Last name: %s\n",lastn);
    printf("Email: %s\n",email);
    printf("Mobile Number: %.0lf\n",num);
    printf("Account number: %d",r);

    // Deposit amount
    int goal;
    printf("\n\n\nEnter you saving goal:\n");
    scanf("%d",&goal);
    int dep_amount;
    int tot_amount;
    printf("Enter the amount you want to deposit:");
    scanf("%d",&dep_amount);
    tot_amount=tot_amount + dep_amount;
    if(dep_amount<0 ){
        printf("Invalid amount");
        return 0;
    }else{
        printf("\n\nTotal amount remaining in this account: %d",tot_amount);
    }


    // Withdraw amount
    int wit_amount;
    printf("\n\n\nEnter the amount you want to withdraw:");
    scanf("%d",&wit_amount);
    if(wit_amount>tot_amount)
    {
        printf("You don't have enough amount in your account.");
    }
    if(wit_amount<0 ){
        printf("Invalid amount.");
        return 0;
    }else{
        printf("\n\nTotal amount remaining in this account: %d",tot_amount);
    }


    //Saving goals
    int save;
    printf("The total amount remaining to achieve your goal is:\n");
    save= tot_amount-goal;
    printf("The total amount remaining to achieve your goal is %d:\n",save);
    if(save<0)
    {
        printf("Great! You have achieved the goal.");
    }
    

    //Check balance
    int check;
    printf("\n\n\nDo you want to check your balance? (Press 1 for Yes and Press 0 for No)\n");
    scanf("%d",&check);
    if(check == 1)
    {
        printf("Account number: %d\n",r);
        printf("Total Balance in this account: %d\n\n",tot_amount);
    }
}
