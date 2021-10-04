class Solution {
public:
    int jump(vector<int>& nums) {
        int targetIdx = nums.size() - 1;
        int index = 0;
        int jumps = 0;
        
        while (targetIdx > 0) {
            for (int i = 0; i < targetIdx; i++) {
                if (i + nums[i] >= targetIdx) {
                    targetIdx = i;
                    jumps++;
                    break;
                }
            }
        }
        return jumps;
    }
};