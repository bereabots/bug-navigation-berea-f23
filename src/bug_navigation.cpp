#include <cmath>
#include <iostream>
#include <signal.h>

#include <mbot_bridge/robot.h>

#include <bug_navigation/common/utils.h>

bool ctrl_c_pressed;
void ctrlc(int) {
    ctrl_c_pressed = true;
}


int main() {
    signal(SIGINT, ctrlc);
    signal(SIGTERM, ctrlc);

    // Initialize the robot.
    mbot_bridge::MBot robot;
    // Reset the robot odometry to zero.
    robot.resetOdometry();

    /**
     * TODO: (P2.4) Ask the user for a goal pose (x and y position and angle).
     *
     * In addition, declare any additional variables you might need here.
     **/
    float goal_x, goal_y, goal_theta;  // Variables to hold the goal.

    // TODO: You may want to change the condition in this loop.
    while (true) {
        /**
         * TODO: (P2.3 & P2.4) Write code to drive to the given goal while
         * avoiding obstacles here.
         *
         * HINT: You might want to use function findMinDistInSlice() to determine
         * whether the robot's path to the goal is obstructed.
         *
         * HINT: You may reuse your code and util functions from wall follower
         * for the obstacle avoidance state.
         */

        // Small sleep to avoid sending drive commands too fast.
        sleepFor(0.1);

        if(ctrl_c_pressed) {
            break;
        }
    }

    // Stop the robot.
    robot.stop();

    // TODO: Print out the robot's final odometry before exiting.
}
