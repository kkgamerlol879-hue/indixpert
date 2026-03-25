#include<stdio.h>
int main()

{
    int option;
    int amount,currnt_balance=5000;
    while(1)
    {
        printf("\nclick 1 for deposit");
        printf("\nclick 2 for withdraw");
        printf("\nclick 3 for balance inqury");
        printf("\nclick 4 for exit");

        printf("\nplease enter your option");
        scanf("%d",&option);
        if(option == 1)
        {
            printf("\nplease enter the amount to deposit:-\n");
            scanf("%d",&amount);

            currnt_balance += amount;
            printf("\n$$$$$$$$$$$amount deposit successfully $$$$$$$$$$$$$\n");
        }
        else if (option == 2)
        {
           printf("\nenter the amount to withdraw\n");
           scanf("%d",&amount);

           if(currnt_balance -= amount) 
           printf("\n$$$$$$$$$$ withdraw seccessfully $$$$$$$$$$\n");
           
        }
        else if(option == 3)
        {
            printf("\nyour account total balance %d\n",currnt_balance);

        }
        else if(option == 4 )
        {
            printf("\n$$$$$$$$$$ exided $$$$$$$$$$$\n");
            break;
        }
        else
        {
        printf("\n enter the correct option\n");
        }
    
    }
}