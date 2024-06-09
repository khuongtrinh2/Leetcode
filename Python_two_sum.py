from typing import List
class Solution:
    def twosum(self, nums: List[int], target: int):
        for i in range(len(nums)):
            for j in range(i +1, len(nums) ):
                if ( nums [i]+ nums[j]==target):
                    return [i,j]

solution= Solution()
nums = [2,5,11,19]
target = 7

result = solution.twosum(nums, target)
print(result)
