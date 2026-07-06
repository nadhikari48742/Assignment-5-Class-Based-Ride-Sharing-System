#pragma once

#include <string>
#include <vector>

#include "Ride.h"

class Rider
{
private:

    int riderID;
    std::string name;
    std::vector<Ride*> requestedRides;

public:

    Rider(int id, std::string n);

    void requestRide(Ride* ride);

    void viewRides();
};