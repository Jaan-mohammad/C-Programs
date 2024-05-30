#include <stdio.h>
#include <string.h>

//You can write code for a single card-holder, then you can copy paste the same code but change the information of card-holder like it's Name, Pin and Balance.

int main()
{
    char card[20];
    int sel, amt, attempt;
    int pin;
    float bal;

    printf("\nWelcome to the ATM\n");
    printf("----------------------------\n");
    printf("Enter Card Holder Name: ");
    printf("(JAAN MOHAMMAD, UZAIR, IRFAN):\n");
    fgets(card, sizeof(card), stdin); // take whole string with white-spaces also
    card[strcspn(card, "\n")] = '\0'; //Removes newline character from the string if present.

    // FIRST CARD-HOLDER------
    if (strcmp(card, "JAAN MOHAMMAD") == 0 || strcmp(card, "jaan mohammad") == 0) // string function to compare the string
    {
        printf("\nEnter 1 to Withdraw money.\n");
        printf("Enter 0 to check Balance.\n");
        scanf("%d", &sel);

        bal = 28000;
        pin = 2008;
        if (sel == 1) // To withdraw money
        {

            attempt = 3;
            while (attempt > 0) // loop to re-enter your pin if it is wrong
            {
                printf("Enter your pin: ");
                scanf("%d", &pin);

                if (pin == 2008)
                {
                    printf("Enter amount to Withdraw: ");
                    scanf("%d", &amt);

                    if (amt <= bal) // To check amount is within range of your balance
                    {
                        printf("----------------------------\n");
                        printf("\n%d rupees are debited from your account.\n", amt);
                        bal -= amt;
                        printf("Your balance left is: %.2f.\n\n", bal);
                        printf("----------------------------\n");
                    }
                    else
                    {
                        printf("----------------------------\n");
                        printf("Insufficient Balance.\n");
                        printf("----------------------------\n");
                    }
                    break;
                }

                else
                {
                    attempt--;
                    if (attempt > 0)
                    {
                        printf("Wrong pin.\n");
                        printf("You have %d attempts(s) left\n", attempt);
                    }
                    else
                    {
                        printf("\nSorry! You exceede the limit.\n");
                        printf("----------------------------\n");
                        printf("Exiting...\n");
                        printf("Done.\n\n");
                        return 1;
                    }
                }
            }
        }

        else if (sel == 0) // To check Balance
        {
            printf("Enter your Pin: ");
            scanf("%d", &pin);
            if (pin == 2008)
            {
                printf("------------------------\n");
                printf("Your balance is: %.2f\n", bal);
                printf("THANK YOU!\n");
                printf("------------------------\n");
            }
            else
            {
                printf("Invalid Pin\n");
            }
        }
    }

    // SECOND CARD-HOLDER-------
    if (strcmp(card, "UZAIR") == 0 || strcmp(card, "uzair") == 0) // string function to compare the string
    {
        printf("\nEnter 1 to Withdraw money.\n");
        printf("Enter 0 to check Balance.\n");
        scanf("%d", &sel);

        bal = 58000;
        pin = 5008;
        if (sel == 1) // To withdraw money
        {

            attempt = 3;
            while (attempt > 0) // loop to re-enter your pin if it is wrong
            {
                printf("Enter your pin: ");
                scanf("%d", &pin);

                if (pin == 5008)
                {
                    printf("Enter amount to Withdraw: ");
                    scanf("%d", &amt);

                    if (amt <= bal) // To check amount is within range of your balance
                    {
                        printf("----------------------------\n");
                        printf("\n%d rupees are debited from your account.\n", amt);
                        bal -= amt;
                        printf("Your balance left is: %.2f.\n\n", bal);
                        printf("----------------------------\n");
                    }
                    else
                    {
                        printf("----------------------------\n");
                        printf("Insufficient Balance.\n");
                        printf("----------------------------\n");
                    }
                    break;
                }

                else
                {
                    attempt--;
                    if (attempt > 0)
                    {
                        printf("Wrong pin.\n");
                        printf("You have %d attempts(s) left\n", attempt);
                    }
                    else
                    {
                        printf("\nSorry! You exceede the limit.\n");
                        printf("----------------------------\n");
                        printf("Exiting...\n");
                        printf("Done.\n\n");
                        return 1;
                    }
                }
            }
        }

        else if (sel == 0) // To check Balance
        {
            printf("Enter your Pin: ");
            scanf("%d", &pin);
            if (pin == 5008)
            {
                printf("------------------------\n");
                printf("Your balance is: %.2f\n", bal);
                printf("THANK YOU!\n");
                printf("------------------------\n");
            }
            else
            {
                printf("Invalid Pin\n");
            }
        }
    }

    // THIRD CARD-HOLDLER----------
    if (strcmp(card, "IRFAN") == 0 || strcmp(card, "irfan") == 0) // string function to compare the string
    {
        printf("\nEnter 1 to Withdraw money.\n");
        printf("Enter 0 to check Balance.\n");
        scanf("%d", &sel);

        bal = 96000;
        pin = 9006;
        if (sel == 1) // To withdraw money
        {

            attempt = 3;
            while (attempt > 0) // loop to re-enter your pin if it is wrong
            {
                printf("Enter your pin: ");
                scanf("%d", &pin);

                if (pin == 9006)
                {
                    printf("Enter amount to Withdraw: ");
                    scanf("%d", &amt);

                    if (amt <= bal) // To check amount is within range of your balance
                    {
                        printf("----------------------------\n");
                        printf("\n%d rupees are debited from your account.\n", amt);
                        bal -= amt;
                        printf("Your balance left is: %.2f.\n\n", bal);
                        printf("----------------------------\n");
                    }
                    else
                    {
                        printf("----------------------------\n");
                        printf("Insufficient Balance.\n");
                        printf("----------------------------\n");
                    }
                    break;
                }

                else
                {
                    attempt--;
                    if (attempt > 0)
                    {
                        printf("Wrong pin.\n");
                        printf("You have %d attempts(s) left\n", attempt);
                    }
                    else
                    {
                        printf("\nSorry! You exceede the limit.\n");
                        printf("----------------------------\n");
                        printf("Exiting...\n");
                        printf("Done.\n\n");
                        return 1;
                    }
                }
            }
        }

        else if (sel == 0) // To check Balance
        {
            printf("Enter your Pin: ");
            scanf("%d", &pin);
            if (pin == 9006)
            {
                printf("------------------------\n");
                printf("Your balance is: %.2f\n", bal);
                printf("THANK YOU!\n");
                printf("------------------------\n");
            }
            else
            {
                printf("Invalid Pin\n");
            }
        }
    }
    return 0;
}
