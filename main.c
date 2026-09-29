#include <stdio.h>

#define MAX_VALUES 5

double convertDistances(double miles)
{
    return miles * 1.60934;
}

double convertWights(double pounds)
{
    return pounds * 0.453592;
}

double convertVolumes(double gallons)
{
    return gallons * 3.78541;
}

int main(void)
{
    int choice;
    int count;
    double values[MAX_VALUES];

    printf("Unit Conversion Calculator\n");

    do
    {
        printf("\n");
        printf("1. Convert distances from miles to kilometers\n");
        printf("2. Convert weights from pounds to kilograms\n");
        printf("3. Convert volumes from gallons to liters\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the number of values to convert (max 5): ");
                scanf("%d", &count);

                if (count < 1 || count > MAX_VALUES)
                {
                    printf("Invalid number of values. Please enter a number between 1 and 5.\n");
                    break;
                }

                printf("Enter the values to convert:\n");

                for (int i = 0; i < count; i++)
                {
                    scanf("%lf", &values[i]);
                }

                printf("Converted distances:\n");

                for (int i = 0; i < count; i++)
                {
                    printf("%.2f miles = %.2f kilometers\n",
                           values[i], convertDistances(values[i]));
                }

                printf("Press Enter to continue...");
                getchar();
                getchar();
                break;

            case 2:
                printf("Enter the number of values to convert (max 5): ");
                scanf("%d", &count);

                if (count < 1 || count > MAX_VALUES)
                {
                    printf("Invalid number of values. Please enter a number between 1 and 5.\n");
                    break;
                }

                printf("Enter the values to convert:\n");

                for (int i = 0; i < count; i++)
                {
                    scanf("%lf", &values[i]);
                }

                printf("Converted weights:\n");

                for (int i = 0; i < count; i++)
                {
                    printf("%.2f pounds = %.2f kilograms\n",
                           values[i], convertWights(values[i]));
                }

                printf("Press Enter to continue...");
                getchar();
                getchar();
                break;

            case 3:
                printf("Enter the number of values to convert (max 5): ");
                scanf("%d", &count);

                if (count < 1 || count > MAX_VALUES)
                {
                    printf("Invalid number of values. Please enter a number between 1 and 5.\n");
                    break;
                }

                printf("Enter the values to convert:\n");

                for (int i = 0; i < count; i++)
                {
                    scanf("%lf", &values[i]);
                }

                printf("Converted volumes:\n");

                for (int i = 0; i < count; i++)
                {
                    printf("%.2f gallons = %.2f liters\n",
                           values[i], convertVolumes(values[i]));
                }

                printf("Press Enter to continue...");
                getchar();
                getchar();
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 4);

    return 0;
}