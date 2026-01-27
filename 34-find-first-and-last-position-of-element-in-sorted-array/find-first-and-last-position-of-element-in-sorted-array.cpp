class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) return {-1, -1};
        if (nums.size() == 1) {
            if (nums[0] == target) return {0, 0};
            else return {-1, -1};
        }

        vector<int> result(2, -1);  // default [-1, -1]

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (result[0] == -1) result[0] = i;  // First occurrence
                result[1] = i;                       // Last occurrence
            }
        }

        return result;
    }
};