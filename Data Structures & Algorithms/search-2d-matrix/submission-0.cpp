class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int high = m-1;
        while (low <= high) {
            int mid = low + (high-low)/2;
            if(matrix[mid][0] <= target && target <= matrix[mid][n-1]) {
                int l = 0;
                int h = n-1;
                while(l <= h) {
                    int k = (l+h)/2;
                    if(target == matrix[mid][k]) return true;
                    else if(matrix[mid][k] < target) l = k + 1;
                    else h = k - 1;
                }
                return false;
            }
            else if(matrix[mid][n-1] < target) low = mid + 1;
            else high = mid-1;
        }
        return false;
    }
};
