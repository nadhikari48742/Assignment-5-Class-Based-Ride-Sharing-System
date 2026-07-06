#include "Ride.h"
#include <iostream>

Ride::Ride(int id, std::string pickup, std::string dropoff, double dist)
{
    rideID = id;
    pickupLocation = pickup;
    dropoffLocation = dropoff;
    distance = dist;
    fare = 0;
}

double Ride::calculateFare()
{
    fare = distance * 2.0;
    return fare;
}

void Ride::rideDetails()
{
    std::cout << "Ride ID: " << rideID << std::endl;
    std::cout << "Pickup: " << pickupLocation << std::endl;
    std::cout << "Dropoff: " << dropoffLocation << std::endl;
    std::cout << "Distance: " << distance << std::endl;
    std::cout << "Fare: $" << fare << std::endl;
}