#include<stdio.h>

typedef struct 
{
    char *engine;
    char *fule_type;
    int fule_tank_cap;
    int seating_cap;
    float city_mileage;    
}CarType_t;

int main()
{
    CarType_t myCar;
    myCar.engine = "V8";
    myCar.fule_type = "Petrol";
    myCar.fule_tank_cap = 50;
    myCar.seating_cap = 5;
    myCar.city_mileage = 12.5;

    // Access and print values
    printf("Engine: %s\n", myCar.engine);
    printf("Fuel Type: %s\n", myCar.fule_type);
    printf("Fuel Tank Capacity: %d\n", myCar.fule_tank_cap);
    printf("Seating Capacity: %d\n", myCar.seating_cap);
    printf("City Mileage: %.2f\n", myCar.city_mileage);
    return 0;
}