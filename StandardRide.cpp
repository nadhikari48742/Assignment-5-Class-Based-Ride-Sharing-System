#include "StandardRide.h"

StandardRide::StandardRide(int id, std::string pickup, std::string dropoff, double dist)
    : Ride(id, pickup, dropoff, dist)
{
}

double StandardRide::calculateFare()
{
    fare = distance * 2.0;
    return fare;
}