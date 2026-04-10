#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        int lenX = nums1.size();
        int lenY = nums2.size();
        int total = lenX + lenY;
        int low = 0;
        int high = lenX;
        while (low <= high) {
            int partitionX = low + (high - low) / 2;
            int partitionY = (total + 1) / 2 - partitionX;

            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == lenX) ? INT_MAX : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? INT_MIN: nums2[partitionY - 1];
            int minRightY = (partitionY == lenY) ? INT_MAX: nums2[partitionY];

            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                if (total % 2 == 0) {
                    return (max(maxLeftX, maxLeftY) +  min(minRightX, minRightY)) / 2.0;
                }
                return max(maxLeftX, maxLeftY);
            } else if (minRightY < maxLeftX) {
                high = partitionX - 1;
            } else {
                low = partitionX + 1;
            }
        }
        return -1;
    }
};