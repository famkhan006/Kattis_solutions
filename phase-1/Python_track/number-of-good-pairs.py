class Solution:
    def numIdenticalPairs(self, nums):
        cnt = Counter(nums)
        res = 0

        for count in cnt.values():
            res += (count * (count - 1)) // 2

        return res