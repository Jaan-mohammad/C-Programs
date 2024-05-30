#include <stdio.h>

#define MAX_NAME 20
#define MAX_NUMBER 100
#define MAX_ADDR 50

// structrure to save different contacts
struct contact
{
    int number;
    char name[MAX_NAME];
    char addr[MAX_ADDR];
};

int main()
{
    int num;
    printf("---------Phone-Book---------\n");
    printf("Enter 1 to add your number.\n");
    printf("Enter 0 to Exit Phone-Book.\n");
    scanf("%d", &num);

    if (num == 1)
    {
        int x;
        struct contact contacts[MAX_NUMBER];
        printf("How many numbers do you want to add\n");
        scanf("%d", &x);

        for (int i = 0; i < x; i++) // loop to save 'x' number of contacts
        {
            printf("Enter name for contact %d: ", i + 1);
            scanf("%s", contacts[i].name);
            printf("Enter number for contact %d:", i + 1);
            scanf("%d", &contacts[i].number);
            printf("Enter Address for contact %d:", i + 1);
            scanf("%s", contacts[i].addr);
            printf("CONTACT ADDED SUCCESSFULLY.\n");
            printf("\n");
            printf("------------------------------------\n");
        }

        int y;
        printf("Enter 5 to view contact information.\n");
        printf("Enter 7 to Exit Phone-Book.\n");
        scanf("%d", &y);

        if (y == 5) //view info
        {
            int z;
            printf("Information of how many Contacts?: "); // view contacts
            scanf("%d", &z);

            if (z > x)
            {
                printf("_____________________________\n");
                printf("Only %d contact(s) Available.\n", x);
                return 1;
            }

            for (int i = 0; i < z; i++) // view information of 'z' number of contacts
            {
                printf("\n");
                printf("Name of contact %d: %s\n", i + 1, contacts[i].name);
                printf("Number of contact %d: %d\n", i + 1, contacts[i].number);
                printf("Address of contact %d: %s\n", i + 1, contacts[i].addr);
                printf("------------------------------------\n");
            }
        }

        if (y == 7) //exit
        {
            printf("--------------------\n");
            printf("Exiting Phone-Book....\n");
            printf("Done.\n");
            printf("--------------------\n");
            return 1;
        }
    }
    else if (num == 0) //exit
    {
        printf("--------------------\n");
        printf("Exiting Phone-Book....\n");
        printf("Done.\n");
        printf("--------------------\n");
        return 1;
    }
    else
    {
        printf("Invalid Value.\n");
    }
    return 0;
}
