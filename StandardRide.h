#pragma once
#include "Ride.h"

class StandardRide : public Ride
{
public:
    StandardRide(int id, std::string pickup, std::string dropoff, double dist);

    double calculateFare() override;
};