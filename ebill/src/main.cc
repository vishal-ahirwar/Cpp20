#include <stdio.h>
#include <string.h>
int main()
{
    char yes[3]; // Changed data type to string to store 'yes' or 'no'
    float i{}, v{}, p1{}, p2{}, p{}, t{}, d{};

    printf("Do you want to calculate units of electricity?\n");
    printf("Enter your answer (yes or no):\n");
    scanf("%s", yes);

    if (strcmp(yes, "yes") == 0)
    { // Compare strings using strcmp
        printf("ok\n");

        printf("Do you have value of voltage? (yes or no)\n");
        scanf("%s", yes);

        if (strcmp(yes, "yes") == 0)
        {
            printf("Enter the value of voltage:\n");
            scanf("%f", &v);
        }
        else
        {
            printf("No problem.\n");
        }

        printf("Do you have value of current? (yes or no)\n");
        scanf("%s", yes);

        if (strcmp(yes, "yes") == 0)
        {
            printf("Enter the value of current:\n");
            scanf("%f", &i);
        }
        else
        {
            printf("No problem.\n");
        }

        if (i && v)
        {
            p1 = v * i;
        }

        printf("Do you have value of power? (yes or no)\n");
        scanf("%s", yes);

        if (strcmp(yes, "yes") == 0)
        {
            printf("Enter the value of power:\n");
            scanf("%f", &p2);
        }
        else
        {
            printf("No problem.\n");
        }

        // check condition of power equivalent.
        if (p1 == p2)
        {
            p = p2;
        }
        else
        {
            p = p2;
        }

        printf("Enter the value of time (in hours):\n");
        scanf("%f", &t);

        printf("Enter the value of days:\n");
        scanf("%f", &d);

        float unit = (p * t * d) / 1000;
        float bill = unit * 5.50;
        float hp = p / 746;
        float e = p * t;

        printf("\nThe unit consumed by this device is: %f\n", unit);
        printf("You will get a bill: %f\n", bill);
        printf("Your device's hp is = %f\n", hp);
        printf("Your device consumes energy per hour (in joules): %f\n", e);
    }
    else
    {
        printf("No problem, thank you for your contribution.\n");
    }

    return 0;
}