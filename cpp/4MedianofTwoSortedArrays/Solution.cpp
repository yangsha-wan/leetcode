//
// Created by baidu on 14/10/2016.
//
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        if (m == 0)
            return (double(nums2[n / 2] + nums2[(n - 1) / 2])) / 2;
        if (n == 0)
            return (double(nums1[m / 2] + nums1[(m - 1) / 2])) / 2;
        int i1 = 0, i2 = m - 1, j1 = 0, j2 = n - 1;
        while(true) {
            if (i1 == i2 && j1 == j2) {
                return double(nums1[i1] + nums2[j1]) / 2;
            }
            if (i1 > i2) {
                return double(nums2[(j1 + j2) / 2] + nums2[(j1 + j2 + 1) / 2]) / 2;
            }
            if (j1 > j2) {
                return double(nums1[(i1 + i2) / 2] + nums1[(i1 + i2 + 1) / 2]) / 2;
            }
            if (nums1[i1] < nums2[j1]) {
                i1++;
            } else {
                j1++;
            }
            if (nums1[i2] < nums2[j2]) {
                j2--;
            }
            else {
                i2--;
            }
        }
    }
};
