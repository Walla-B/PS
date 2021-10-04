class Solution {
public:
    bool canJump(vector<int>& nums) {

        int size = nums.size();
        int rechable = 0;
        
        reverse(nums.begin(), nums.end());
        
        for (int i = 1 ; i < size ; i++) {
            if (nums[i] >= i - rechable) {
                rechable = i;
            }
        }
        
        if (rechable >= size-1) return true;
        else return false;
        
    }
};