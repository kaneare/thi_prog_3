#pragma once

#include "Export.h"

class THIRD_LAB_API IElectricVehicle {
public:
    virtual double GetBatteryCapacity() const = 0;
    virtual int GetRange() const = 0;

    virtual ~IElectricVehicle() = default;
};
