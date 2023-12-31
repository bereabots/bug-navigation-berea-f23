#include <bug_navigation/common/utils.h>

std::vector<float> crossProduct(const std::vector<float>& v1, const std::vector<float>& v2)
{
    std::vector<float> res;
    /**
     * TODO: (P1.2) Take the cross product between v1 and v2 and store the
     * result in res. v1, v2, and res should be vectors with 3 elements, which
     * correspond to the vector components [x, y, z].
     **/
    return res;
}

int findMinDist(const std::vector<float>& ranges)
{
    int min_idx;

    /**
     * TODO: (P1.2) Return the index of the shortest ray in the Lidar scan.
     * For example, if the shortest ray is the third one, at index 2, return 2.
     *
     * HINT: The length of each ray is stored in the vector ranges.
     *
     * HINT: Do not take into account any rays which have 0 distance. This means
     * that the ray returned by the sensor is invalid. Invalid rays will have
     * default range 0, which will always be the minimum if you forget to check
     * for validity.
     **/

    return min_idx;
}

int findMinDistInSlice(const std::vector<float>& ranges, const std::vector<float>& thetas,
                       float goal_angle, float slice_size)
{
    int min_idx = -1;
    float min_dist = HIGH;
    // Iterate through every ray.
    for (int i = 0; i < thetas.size(); i++) {
        // Only look at scans within the view angle.
        if(abs(wrapAngle(goal_angle - thetas[i])) < slice_size) {
            if(ranges[i] < min_dist && ranges[i] > 0) {
                min_dist = ranges[i];
                min_idx = i;
            }
        }
    }

    return min_idx;
}
