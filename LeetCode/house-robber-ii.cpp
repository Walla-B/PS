class Solution {
public:
    std::map<int, int> maxmoney;
    
    int rob(vector<int>& nums) {
        
        int n = nums.size() - 1;        
        return max(maxrob(nums, 0, n-1), maxrob(nums,1,n));
    }

    int maxrob(vector<int>& nums, int front, int end) {
        if (front == end) return nums[front];
        if (end - front == 1) return max(nums[front], nums[end]);
        
        std::map<int,int>::iterator iter;
        
        iter = maxmoney.find(end);
        if (iter != maxmoney.end()) return iter->second;
        
        int result = max(maxrob(nums, front, end-1), maxrob(nums,front,end-2) + nums[end]);
        maxmoney.insert(pair<int,int>(end, result));
        return result;
    
    }
};