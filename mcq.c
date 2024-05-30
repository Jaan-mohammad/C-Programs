#include <stdio.h>

int main()
{
    int i;
    char ans1, ans2, ans3, ans4;
    int point1 = 0, point2 = 0, point3 = 0, point4 = 0;

    printf("Press 1 to Start Game:\n");
    printf("Press 0 to Exit Game:\n\n");

    scanf("%d", &i);

    if (i == 1)
    {
        // Question first//
        printf("The game has started..\n");

        printf("1) C Programming was created at ______ by Dennis Ritchie.\n");
        printf("a. Stanford Lab\n");
        printf("b. Haward University\n");
        printf("c. AT&T Bell Laboratory\n");
        printf("d. L&T Laboratory\n");
        scanf(" %c", &ans1);

        if (ans1 == 'c')
        {
            printf("Correct Answer\n");
            point1 = 5;
            printf("Your points: %d\n\n", point1);
        }
        else
        {
            printf("Wrong Answer\n");
            printf("Your points: %d\n\n", point1);
        }

        // Question second//
        printf("2) Many features of C were derived from an earlier language called _____.\n");
        printf("a. B\n");
        printf("B. PASCAL\n");
        printf("c. BASIC\n");
        printf("d. FORTRAN\n");
        scanf(" %c", &ans2);

        if (ans2 == 'a')
        {
            printf("Correct Answer\n");
            point2 = point1 + 5;
            printf("Your points: %d\n\n", point2);
        }
        else
        {
            printf("Wrong Answer\n");
            point2 = point1;
            printf("Your points: %d\n\n", point2);
        }

        // Question third//
        printf("3) C Programming was created in Year.\n");
        printf("a. 1976\n");
        printf("b. 1972\n");
        printf("c. 1927\n");
        printf("d. 1967\n");
        scanf(" %c", &ans3);

        if (ans3 == 'b')
        {
            printf("Correct Answer\n");
            point3 = point2 + 5;
            printf("Your points: %d\n\n", point3);
        }
        else
        {
            printf("Wrong Answer\n");
            point3 = point2;
            printf("Your points: %d\n\n", point3);
        }

        // Question Fourth//
        printf("4) Which Committee standardize C Programming Language ?\n");
        printf("a. ANSI\n");
        printf("b. W3C\n");
        printf("c. TRAI\n");
        printf("d. ISO\n");
        scanf(" %c", &ans4);

        if (ans4 == 'a')
        {
            printf("Correct Answer\n");
            point4 = point3 + 5;
            printf("Your Points: %d\n\n", point4);
        }
        else
        {
            printf("Wrong Answer.\n");
            point4 = point3;
            printf("Your Points: %d\n\n", point4);
        }
    }
    else if (i == 0)
    {
        printf("Exiting Game...\n");
        printf("Done.\n");
        return 1;
    }
    else
    {
        printf("Invalid Value.\n");
    }
    return 0;
}