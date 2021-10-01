class Solution {
public:
    
    std::map<int,int> minmap;
    int minCostClimbingStairs(vector<int>& cost) {
        
        cost.append(0);
        return findmin(cost, cost.size());
        
    }
    
    int findmin(vector<int>& cost, int target) {
        int staircount = cost.size();
       
        if(staircount <= 0) return 0;
        if(staircount == 1) return cost[0];
        if(staircount == 2) return min(cost[0], cost[1]);
        
        std::map<int,int>::iterator iter;
        iter = minmap.find(target);
        if(iter != minmap.end()) return iter->second;
        
        int result = cost[target] + min(findmin(cost, target-1), findmin(cost, target-2));
        minmap.insert(pair<int,int>(target, result));
        return result;
    }
};