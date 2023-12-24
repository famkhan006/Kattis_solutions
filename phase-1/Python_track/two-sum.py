class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l={}
        for i, value in enumerate(nums):
            r = target - nums[i]
            if r in l:
                return [i, l[r]]
            l[value] = i


