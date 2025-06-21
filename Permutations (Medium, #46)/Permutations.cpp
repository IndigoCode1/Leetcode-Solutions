class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result {};
        recurse(result, {}, nums);
        return result;
    }

    void recurse(vector<vector<int>>& result, vector<int> current, vector<int>& new_nums) {
        int length = new_nums.size();
        if (length == 0) {
            result.push_back(current);
            return;
        }

        for (int i = 0; i < length; ++i) {
            vector<int> new_current = current;
            new_current.push_back(new_nums[i]);
            vector<int> current_nums = new_nums;
            current_nums.erase(current_nums.begin() + i);
            recurse(result, new_current, current_nums);
        }
    }
};

