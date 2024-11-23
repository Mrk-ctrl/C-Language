#include <stdio.h>

struct 
{
    char *car_name;
    char *car_engine;
    char *car_fuel_type;
    int car_seating_capacity;
    float car_city_mileage;
}car1, car2;

int main(){

    car1.car_name = "Dodge challenger";
    car1.car_seating_capacity = 2;
    car1.car_engine = "V12";
    car1.car_fuel_type = "XP100";
    car1.car_city_mileage = 4.5;
    car2.car_seating_capacity = 6;

    printf("The name of car 1 is: %s\n", car1.car_name);
    printf("The seating capacity of car 2 is: %d\n", car2.car_seating_capacity);

    return 0;
}