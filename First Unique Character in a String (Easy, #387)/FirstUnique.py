class Solution:
    def firstUniqChar(self, s: str) -> int:
        mydict = dict()
        index = 0

        for c in s:
            if c not in mydict.keys():
                mydict[c] = index
            else:
                mydict[c] = -1
            index += 1
        
        for value in mydict.values():
            if value != -1:
                return value

        return -1

# Time complexity O(n) and Space complexity O(1)