class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        
        unordered_map<char, int> my_map {};
        for (char c : s) {
            if(my_map.find(c) == my_map.end())
                my_map.insert(make_pair(c, 0));
            my_map[c]++;
        }

        for (char c : t) {
            if (!my_map.contains(c) || my_map.at(c) == 0)
                return false;
            my_map[c]--;
        }

        return true;
    }
};

// This solution has time complexity of O(n) and space complexity of O(1)