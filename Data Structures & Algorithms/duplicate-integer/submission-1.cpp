class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        map <int,int> num;
        for(int i = 0; i < nums.size(); i++) {
            num[nums[i]] += 1;
        }
        for ( auto &pair : num) {
            if(pair.second > 1) return true;
        }
        return false;
    }
};