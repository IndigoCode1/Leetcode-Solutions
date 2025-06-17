class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        size = len(nums)
        nums_dict = dict()
        for i in range(size):
            nums_dict[nums[i]] = i

        index = 0;        
        for i in nums:
            diff = target - i
            if diff in nums_dict and index != nums_dict[diff]:
                return [index, nums_dict[diff]]
            index += 1
    
# This solution has time complexity of O(n) and space complexity of O(n)