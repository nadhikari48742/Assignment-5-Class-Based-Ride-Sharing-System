#include "PremiumRide.h"

PremiumRide::PremiumRide(int id, std::string pickup, std::string dropoff, double dist)
    : Ride(id, pickup, dropoff, dist)
{
}

double PremiumRide::calculateFare()
{
    fare = distance * 3.5;
    return fare;
}