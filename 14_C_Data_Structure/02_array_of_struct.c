#include<stdio.h>

typedef struct 
{
    int fule_tank_cap;
    int seating_cap;
    float city_mileage;
}CarType_t;

int main()
{
    int totalCar = 0;
    printf("How Many Cars do you have? ");
    scanf("%d", &totalCar);
    CarType_t Cars[totalCar];
    printf("\nEnter Car Information: \n");

    for (int i = 0; i < totalCar; i++)
    {
        printf("------------------------\n");
        printf("Car Number: %d\n",i + 1);
        printf("Seating Capacity: \n");
        scanf("%d", &Cars[i].seating_cap);
        printf("Fule Tank Capacity: \n");
        scanf("%d", &Cars[i].fule_tank_cap);
        printf("City Mileage: \n");
        scanf("%d", &Cars[i].city_mileage);
    }
    
    printf("Car Information as per following....\n");
    for (int i = 0; i < totalCar; i++)
    {
        printf("---------------------------------------\n");
        printf("Car Number: %d\n", i +1);
        printf("Seating Capacity: %d\n", Cars[i].seating_cap);
        printf("Fule Tank Capacity: %d\n", Cars[i].fule_tank_cap);
        printf("City Mileage %d\n", Cars[i].city_mileage);
    }
    
}
