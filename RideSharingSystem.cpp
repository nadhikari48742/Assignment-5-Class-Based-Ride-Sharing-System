#include <iostream>
#include <vector>

#include "Ride.h"
#include "StandardRide.h"
#include "PremiumRide.h"
#include "Driver.h"
#include "Rider.h"

int main()
{
    StandardRide ride1(1, "Airport", "Hotel", 10);
    PremiumRide ride2(2, "Mall", "University", 8);

    Driver driver1(101, "John", 4.9);

    Rider rider1(201, "Alice");

    rider1.requestRide(&ride1);
    rider1.requestRide(&ride2);

    driver1.addRide(&ride1);
    driver1.addRide(&ride2);

    std::vector<Ride*> rides;

    rides.push_back(&ride1);
    rides.push_back(&ride2);

    std::cout << "===== Ride Details =====" << std::endl;

    for (Ride* ride : rides)
    {
        ride->calculateFare();
        ride->rideDetails();

        std::cout << "------------------------" << std::endl;
    }

    std::cout << std::endl;

    driver1.getDriverInfo();

    std::cout << std::endl;

    rider1.viewRides();

    return 0;
}