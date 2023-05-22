# tec-Bombsight-Putter

Inspiration from Caddyshack (1980) 24m:50s

## Golf Ball Rolling Simulation with Gyroscopic Correction - `bs-putt-1.c`

The Golf Ball Rolling Simulation with Gyroscopic Correction is a powerful tool that allows you to analyze and understand the trajectory of a golf ball as it rolls towards a hole. By considering various real-world factors and incorporating a gyroscopic correction system, this simulation provides accurate and detailed results. Here's a step-by-step guide on how to use this technology:

1. Launch the Simulation: Start by opening the Golf Ball Rolling Simulation with Gyroscopic Correction program on your computer or device. Ensure that you have the latest version installed for optimal performance.

2. Set the Parameters: Before running the simulation, you need to input the relevant parameters. These include the angle and speed of the putter, the mass of the golf ball, friction values for the ground and grass, air temperature and density, ground level, and distance to the hole. Adjust these values based on the actual conditions you want to simulate.

3. Enable Gyroscopic Correction: Activate the gyroscopic correction system within the simulation. This feature compensates for potential human errors during the swing. It adjusts the ball's initial velocity and direction based on the difference between the actual and optimal values. Ensure that the correction system is turned on to experience its benefits.

4. Run the Simulation: Once all the parameters are set and the gyroscopic correction is enabled, run the simulation. The program will calculate and display the path of the golf ball as it rolls towards the hole. This path will take into account the inputted parameters and the gyroscopic correction system.

5. Analyze the Results: Once the simulation is complete, carefully analyze the results. Pay attention to the trajectory of the golf ball, noting any variations or deviations from the ideal path. Observe how the ball interacts with the ground, grass, and other environmental factors. The simulation will provide valuable insights into the impact of different variables on the ball's movement.

6. Adjust Parameters as Needed: If the results are not as expected or if you want to simulate different scenarios, feel free to adjust the parameters. Modify the angle and speed of the putter, change the friction values, or experiment with other factors to observe their effects on the ball's trajectory. The simulation allows for flexible parameter adjustments to suit your specific needs.

7. Repeat and Refine: To gain a deeper understanding of the golf ball's behavior, repeat the simulation with different parameter combinations. By refining the parameters and observing the results, you can uncover valuable insights into the intricacies of the game and improve your understanding of the factors that influence the ball's path.

8. Apply Findings to Real-World Scenarios: Once you have analyzed and refined the simulation results, apply your findings to real-world golf scenarios. Use the knowledge gained from the simulation to improve your golfing techniques, make better strategic decisions, and enhance your overall performance on the course.

The Golf Ball Rolling Simulation with Gyroscopic Correction offers a comprehensive and accurate representation of a golf ball's trajectory. By following these steps and utilizing this technology, you can gain valuable insights into the dynamics of golf and enhance your understanding and proficiency in the game.

## now for a real pretend bomb - `bs-1.c`
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
 


## Ref

https://www.imdb.com/title/tt0080487/

https://en.wikipedia.org/wiki/Bombsight

https://www.facebook.com/Caddy-Shack-and-the-Bomb-sight-Putter-129412407099957/

