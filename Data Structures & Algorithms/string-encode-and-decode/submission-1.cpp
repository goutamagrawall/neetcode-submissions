class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for (auto it : nums) {
            hash[it]++;
        }

        // Max-heap to store pairs as (frequency, element)
        priority_queue<pair<int, int>> maxHeap;
        
        // Push all map elements into the heap
        for (auto& pair : hash) {
            // pair.second is the frequency (value)
            // pair.first is the number (key)
            maxHeap.push({pair.second, pair.first});
        }

        // Pop the top K elements into your result vector
        vector<int> result;
        while (k-- > 0 && !maxHeap.empty()) {
            result.push_back(maxHeap.top().second); // Get the original key
            maxHeap.pop();
        }

        return result;
    }
};
