class Solution {
public:
    int climbStairs(int n) {
        if (n <= 0) {return 0;}
        if (n == 1) {return 1;}
        if (n == 2) {return 2;}
        
        int total = 0;
        int back1 = 2;
        int back2 = 1;
        
        for (int i = 2 ; i<n; i++) {
            total = back1 + back2;
            back2 = back1;
            back1 = total;
        }
        return total;
    }
};