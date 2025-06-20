class Solution:
    def letterCombinations(self, digits: str) -> list[str]:
        results = []
        num_let = {'2':'abc', '3':'def', '4':'ghi', '5':'jkl', '6':'mno', '7':'pqrs', '8':'tuv', '9':'wxyz'}

        def backtrack(combination, next_digits):
            nonlocal results
            if len(next_digits) == 0:
                results.append(combination)
                return
            
            for c in num_let[next_digits[0]]:
               new_combination = combination + c
               backtrack(new_combination, next_digits[1:])
    
        backtrack("", digits)
        if len(results) == 1:
            return []
        return results