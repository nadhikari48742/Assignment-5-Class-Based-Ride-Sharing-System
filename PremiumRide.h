#pragma once
#include "Ride.h"

class PremiumRide : public Ride
{
public:
    PremiumRide(int id, std::string pickup, std::string dropoff, double dist);

    double calculateFare() override;
};