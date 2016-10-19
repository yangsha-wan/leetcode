package _11ContainerWithMostWater;

/**
 * Created by wanyangsha on 10/11/16.
 */
public class Solution {
    public int maxArea(int[] height) {
        int maxArea = 0;
        int i = 0;
        int j = height.length - 1;
        while (i < j) {
            int area = (j - i) * Math.min(height[i], height[j]);
            if (area > maxArea) {
                maxArea = area;
            }
            if (height[i] < height[j]) {
                i = i + 1;
            } else {
                j = j - 1;
            }
        }
        return maxArea;
    }
}
