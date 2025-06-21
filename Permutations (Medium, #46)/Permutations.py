class Solution:
    def permute(self, nums: list[int]) -> list[list[int]]:
        result = []
        def recurse(new_perm, new_nums):
            nonlocal result
            if len(new_nums) == 0:
                result.append(new_perm)
                return
            
            for i in new_nums:
                current_perm = new_perm.copy()
                current_num = new_nums.copy()

                current_perm.append(i)
                current_num.remove(i)
                recurse(current_perm, current_num)
        
        recurse([], nums)
        return result

if __name__ == '__main__':
    sol = Solution()
    print(sol.permute([1,2,3]))