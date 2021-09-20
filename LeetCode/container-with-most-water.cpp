class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int front = 0;
        int back = height.size()-1;
        
        while (front < back) {
            int h = min(height[front], height[back]);
            int water = h * (back-front);
            maxwater = max(water, maxwater);
            while (front < back && height[front] <= h) front++;
            while (front < back && height[back] <= h) back--;
        }
        
        return maxwater;
    }
};