class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> my_map = {};
        int index = 0;

        for(char c : s) {
            if (my_map.find(c) == my_map.end()) {
                my_map[c] = index;
            }
            else {
                my_map[c] = -1;
            }
            ++index;
        }

        for(char c : s) {
            if (my_map[c] != -1)
                return my_map[c];
        }

        return -1;
    }
};

// Time complexity O(n) and Space complexity O(1)