class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Base Case 1: Negative numbers and zero cannot be powers of two
        if (n <= 0) return false;
        
        // Base Case 2: 2^0 is 1
        if (n == 1) return true;
        
        // If n is odd, it cannot be a power of two (e.g., 6 / 2 = 3, which is odd)
        if (n % 2 != 0) return false;
        
        // Recursive Step: Fix the typo and continue dividing by 2
        return isPowerOfTwo(n / 2);
    }
};