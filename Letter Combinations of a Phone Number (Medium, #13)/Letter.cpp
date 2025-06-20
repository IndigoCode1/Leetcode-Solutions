class Solution {
public:
    unordered_map<char, string> num_to_letters {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
    vector<string> letterCombinations(string digits) {
        vector<string> result {};
        backtrack(result, "", digits);
        if(result.size() == 1)
            return {};
        return result;
    }

    void backtrack(vector<string> & result, string combination, string new_digits) {
        if (new_digits.size() == 0) {
            result.push_back(combination);
            return;
        }

        string letters = num_to_letters.at(new_digits[0]);
        for(char c : letters) {
            backtrack(result, combination + c, new_digits.substr(1));
        }
    }
};