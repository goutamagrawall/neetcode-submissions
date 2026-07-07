class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        merge_sort(nums, low, high);
        return nums;
    }
    void merge_sort(vector<int>& nums, int low, int high) {
        if(low >= high) return;
        int mid = low + (high-low)/2;
        merge_sort(nums, low, mid);
        merge_sort(nums, mid+1, high);
        merge(nums, low, mid, high);
    }
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> arr;
        int left = low;
        int right = mid + 1;
        while(left <= mid && right <= high) {
            if(nums[left] <= nums[right]) {
                arr.push_back(nums[left++]);
            }
            else {
                arr.push_back(nums[right++]);
            }
        }
        while(left <= mid) {
            arr.push_back(nums[left++]);
        }
        while(right <= high) {
            arr.push_back(nums[right++]);
        }
        for(int i = 0; i < arr.size(); i++) {
            nums[low+i] = arr[i];
        }
    }

};