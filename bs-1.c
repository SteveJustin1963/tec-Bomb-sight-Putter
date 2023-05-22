#include <stdio.h>
#include <math.h>

// Constants
#define GRAVITY 9.81 // Acceleration due to gravity in m/s^2
#define AIR_DENSITY_SEA_LEVEL 1.225 // Air density at sea level in kg/m^3
#define TARGET_DISTANCE 1000.0 // Distance to the target in meters
#define DRAG_COEFFICIENT 0.47 // Drag coefficient for a sphere, adjust if needed
#define BOMB_RADIUS 0.1 // Radius of the bomb in meters, adjust if needed

void estimateBombTrajectory(double initialVelocity, double launchAngle, double airDensity, double bombMass, double windSpeed) {
    double time = 0.0; // Time in seconds
    double deltaTime = 0.1; // Time step in seconds
    double velocityX = initialVelocity * cos(launchAngle * M_PI / 180.0) + windSpeed;
    double velocityY = initialVelocity * sin(launchAngle * M_PI / 180.0);
    double positionX = 0.0; // Initial position in meters
    double positionY = 0.0; // Initial position in meters

    printf("Time\t\tPosition (X, Y)\n");

    while (positionY >= 0.0) {
        double dragForceX = 0.5 * DRAG_COEFFICIENT * airDensity * M_PI * pow(BOMB_RADIUS, 2) * pow(velocityX, 2);
        double dragForceY = 0.5 * DRAG_COEFFICIENT * airDensity * M_PI * pow(BOMB_RADIUS, 2) * pow(velocityY, 2);

        double accelerationX = -dragForceX / bombMass;
        double accelerationY = -GRAVITY - dragForceY / bombMass;

        velocityX += accelerationX * deltaTime;
        velocityY += accelerationY * deltaTime;

        positionX += velocityX * deltaTime;
        positionY += velocityY * deltaTime;

        time += deltaTime;

        printf("%.2f\t\t%.2f, %.2f\n", time, positionX, positionY);
    }

    // Determine if the target was hit or missed
    if (fabs(positionX - TARGET_DISTANCE) <= 1.0) {
        printf("\nTarget HIT!\n");
    } else {
        printf("\nTarget MISSED!\n");
    }
}

int main() {
    double initialVelocity = 100.0; // Initial velocity in m/s
    double launchAngle = 45.0; // Launch angle in degrees
    double altitude = 5000.0; // Altitude in meters
    double bombMass = 100.0; // Mass of the bomb in kg
    double windSpeed = 10.0; // Wind speed in m/s

    // Calculate air density based on altitude
    double airDensity = AIR_DENSITY_SEA_LEVEL * exp(-altitude / 10000.0);

    estimateBombTrajectory(initialVelocity, launchAngle, airDensity, bombMass, windSpeed);

    return 0;
}
