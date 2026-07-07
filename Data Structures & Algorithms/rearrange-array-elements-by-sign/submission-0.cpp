class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n,0);
        int j = 0;
        int k = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] >= 0) {
                arr[2*j] = nums[i];
                j++;
            }
            else {
                arr[2*k+1] = nums[i];
                k++;
            }
        }
        return arr;
    }
};