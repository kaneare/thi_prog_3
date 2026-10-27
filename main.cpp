
#include "Sedan.h"
#include "SUV.h"
#include "SportsCar.h"
#include "ElectricCar.h"
#include "Fleet.h"

#include <iostream>

int main() {
    Sedan sedan(
        "Toyota", "Camry", 2024, 30000,
        4, 2.5, "Petrol", 500
    );

    SUV suv(
        "Toyota", "Land Cruiser", 2023, 80000,
        5, 3.5, "Petrol", true, 230
    );

    SportsCar sportsCar(
        "Porsche", "911", 2024, 120000,
        2, 3.0, "Petrol", 3.5, 300
    );

    ElectricCar electricCar(
        "Tesla", "Model 3", 2024, 45000,
        4, 0.0, "Electric", 75, 500
    );

    Fleet fleet;

    fleet.AddVehicle(&sedan);
    fleet.AddVehicle(&suv);
    fleet.AddVehicle(&sportsCar);
    fleet.AddVehicle(&electricCar);

    std::cout << "Vehicle classes and DLL test completed.\n";
    std::cout << "Vehicles created: "
              << fleet.GetVehicleCount() << '\n';

    return 0;
}
