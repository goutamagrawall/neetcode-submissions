class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 0;
        long long num = 0;
        while (num <= n) {
            num = pow(2,i);
            if(num == n) return true;
            i++;
        }
        return false;
    }
        
};