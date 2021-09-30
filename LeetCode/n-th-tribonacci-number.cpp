class Solution {
public:
    int fibarr[40];
    int tribonacci(int n) {
        if (n<3) {
            if (n==0) return 0;
            if (n==1) return 1;
            if (n==2) return 1;
        }
        if (fibarr[n] != 0) return fibarr[n];
        
        return fibarr[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};