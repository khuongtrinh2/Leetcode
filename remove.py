from typing import List
class Solution:
    def removeDuplicate(self, nums: List[int]) -> List[int]:
        i=1
        for j in range(1, len(nums)):
            if nums[i] != nums[j]:
                nums[i]=nums[j]
                i +=1
                return i

solution =Solution()
nums = [1,1,2]
result = solution.removeDuplicate(nums)
print(result)