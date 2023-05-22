# tec-Bombsight-Putter

## Inspiration from Caddyshack (1980) 24m:50s



## now for a real pretend bomb
This C program simulates the trajectory of a bomb that is launched from an initial height with a specified initial velocity and launch angle. It accounts for the effects of gravity, air resistance, and wind on the bomb's trajectory.

The main function of this program is `estimateBombTrajectory()`, which takes in initial velocity, launch angle, air density, bomb mass, and wind speed as parameters. Here's what happens step by step in this function:

1. The initial velocity is broken down into horizontal and vertical components (`velocityX` and `velocityY` respectively) based on the launch angle. The wind speed is added to the horizontal component of velocity to account for the wind's effect.

2. A loop is initiated which continues to execute until the bomb hits the ground, i.e., when its vertical position (`positionY`) is no longer greater than or equal to zero.

3. Inside this loop, for each time step (`deltaTime`), the program first calculates the drag force on the bomb due to air resistance. This force is calculated separately for the horizontal and vertical directions using the formula `0.5 * Cd * rho * A * V^2`, where `Cd` is the drag coefficient, `rho` is the air density, `A` is the cross-sectional area of the bomb (assumed to be spherical), and `V` is the velocity (separate for horizontal and vertical components).

4. Then, the accelerations in the horizontal and vertical directions are calculated by dividing the drag forces by the mass of the bomb and adding the gravity in the vertical direction. 

5. The velocities (`velocityX` and `velocityY`) are updated by adding the product of the corresponding accelerations and `deltaTime`.

6. The bomb's positions (`positionX` and `positionY`) are then updated by adding the product of the updated velocities and `deltaTime` to the previous positions. 

7. The time (`time`) is updated by adding `deltaTime` to it.

8. For every time step, the program outputs the current time and the bomb's position.

9. When the bomb hits the ground, the loop stops and the final horizontal position of the bomb is compared to a predefined target distance. If the horizontal position of the bomb is within 1.0 meter of the target distance, it is considered a hit. Otherwise, it's considered a miss.

In the `main()` function, the initial conditions are defined, such as initial velocity, launch angle, altitude, bomb mass, and wind speed. The air density is calculated based on the altitude, assuming a decrease in air density with increase in altitude. Finally, `estimateBombTrajectory()` function is called with these parameters to simulate and print the bomb's trajectory, and determine whether the bomb hit the target or not.

## code 
`bs-1.c`



## Ref

https://www.imdb.com/title/tt0080487/

https://en.wikipedia.org/wiki/Bombsight

https://www.facebook.com/Caddy-Shack-and-the-Bomb-sight-Putter-129412407099957/

