#include "Rider.h"
#include <iostream>

Rider::Rider(int id, std::string n)
{
    riderID = id;
    name = n;
}

void Rider::requestRide(Ride* ride)
{
    requestedRides.push_back(ride);
}

void Rider::viewRides()
{
    std::cout << "Rider: " << name << std::endl;

    for (Ride* ride : requestedRides)
    {
        ride->rideDetails();
        std::cout << std::endl;
    }
}