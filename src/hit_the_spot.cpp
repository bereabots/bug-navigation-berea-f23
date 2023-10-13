#include <iostream>
#include <cmath>

#include <mbot_bridge/robot.h>
#include <bug_navigation/common/utils.h>


void driveToPose(float goal_x, float goal_y, float goal_theta, mbot_bridge::MBot& robot) {
    /**
    * TODO: (P2.1) Implement your code to drive to the goal pose,
    * [goal_x, goal_y, goal_theta].
    *
    * HINT: Use robot.readOdometry() to get a vector of length 3 containing the
    * robot's odometry [x, y, theta]. The odometry frame is the pose the robot
    * is in at the start of this script.
    **/
}

int main(){
    // Initialize the robot.
    mbot_bridge::MBot robot;
    // Reset the robot odometry to zero at the beginning of the run.
    robot.resetOdometry();

    /**
     * TODO: (P2.1) Call your function driveToPose() to drive to a sequence of
     * goal points.
     *
     * HINT: If you want your robot to stop for a while after reaching a goal,
     * you might find the function sleepFor(secs) useful.
     *
     * HINT: You should use the driveToPose() function you will write, passing
     * it the target x, y and theta, and the robot object. For example, to go
     * to position (2, 3) with angle 0, do:
     *
     *   driveToPose(2, 3, 0, robot);
     **/

    // Stop the robot before exiting.
    robot.stop();

    // TODO: Print out the robot's final odometry before exiting.
}
