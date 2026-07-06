#pragma once
#include <string>

class Ride
{
protected:
    int rideID;
    std::string pickupLocation;
    std::string dropoffLocation;
    double distance;
    double fare;

public:
    Ride(int id, std::string pickup, std::string dropoff, double dist);

    virtual double calculateFare();

    virtual void rideDetails();

    virtual ~Ride() {}
};