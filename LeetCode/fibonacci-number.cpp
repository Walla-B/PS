class Solution {
public:
    int fibarr[31];
    int fib(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        if (fibarr[n] != 0) return fibarr[n];
        
        fibarr[n] = fib(n-1) + fib(n-2);
        return fibarr[n];
    }
    
};