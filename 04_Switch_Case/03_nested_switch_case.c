#include <stdio.h>

int main()
{
    int category, choice;

    // Asking user to select a category
    printf("Select a category:\n");
    printf("1. Fruits\n2. Vegetables\n");
    printf("Enter your choice: ");
    scanf("%d", &category);

    switch (category) 
    {
        case 1: // Fruits
            printf("Select a fruit:\n");
            printf("1. Apple\n2. Banana\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) 
            {
                case 1:
                    printf("You selected: Apple\n");
                    break;
                case 2:
                    printf("You selected: Banana\n");
                    break;
                default:
                    printf("Invalid fruit choice.\n");
            }
            break;

        case 2: // Vegetables
            printf("Select a vegetable:\n");
            printf("1. Carrot\n2. Potato\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) 
            {
                case 1:
                    printf("You selected: Carrot\n");
                    break;
                case 2:
                    printf("You selected: Potato\n");
                    break;
                default:
                    printf("Invalid vegetable choice.\n");
            }
            break;
        default:
            printf("Invalid category choice.\n");
            break;
    }
    return 0;
}