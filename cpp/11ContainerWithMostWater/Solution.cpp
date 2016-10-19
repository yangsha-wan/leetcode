//
// Created by baidu on 15/10/2016.
//

#include "Solution.h"


int _11::Solution::Min(int a, int b) {
    return (a < b) ? a : b;
}

int _11::Solution::maxArea(vector<int> &height) {
    int n = height.size();
    int left = 0, right = n - 1;
    int maxArea = Min(height[0], height[n - 1]) * (n - 1), tempArea = 0;
    while (left != right) {
        if (height[left] < height[right])
            left ++ ;
        else
            right -- ;
        tempArea = Min(height[left], height[right]) * (right - left);
        if (tempArea > maxArea)
            maxArea = tempArea;
    }
    return maxArea;
}
