class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_length = nums.size();
        for(int i = 0; i < nums_length; ++i) {
            int diff = target - nums[i];
            for (int j = i + 1; j < nums_length; ++j) {
                if(nums[j] == diff)
                    return vector<int>{i, j};
            }
        }
        return vector<int>{};
    }
};

// Currently, such a solution is of O(n^2) of time complexity, and O(1) of space complexity. 
// To make this solution faster, we can use an unordered map with the keys being the values in the vector nums and the values being
// the indexes of those values. I will implement this in python so that the time complexity is O(n) and the space complexity is O(n)