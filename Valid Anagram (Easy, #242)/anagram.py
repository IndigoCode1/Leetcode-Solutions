class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        first_dict = dict()

        for c in s:
            if not c in first_dict:
                first_dict[c] = 0
            first_dict[c] += 1
        
        for c in t:
            if not c in first_dict or first_dict[c] == 0:
                return False
            first_dict[c] -= 1

        return True
    
# This solution has time complexity of O(n) and space complexity of O(1)