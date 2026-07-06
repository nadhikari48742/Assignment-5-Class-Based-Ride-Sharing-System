#include "Driver.h"
#include <iostream>

Driver::Driver(int id, std::string n, double r)
{
    driverID = id;
    name = n;
    rating = r;
}

void Driver::addRide(Ride* ride)
{
    assignedRides.push_back(ride);
}

void Driver::getDriverInfo()
{
    std::cout << "Driver ID: " << driverID << std::endl;
    std::cout << "Driver Name: " << name << std::endl;
    std::cout << "Rating: " << rating << std::endl;
    std::cout << "Assigned Rides: " << assignedRides.size() << std::endl;
}