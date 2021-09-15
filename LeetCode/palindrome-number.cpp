class Solution {
public:
    bool isPalindrome(int x) {
        int palindrome = 0;
        
        while (x > palindrome) {
            palindrome = palindrome * 10 + x % 10;
            x /= 10;
        }
        
        if (x == palindrome || x == palindrome / 10) {
            return true;
        }
        else return false;
    }
};