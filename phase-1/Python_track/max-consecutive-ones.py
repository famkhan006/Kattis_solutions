class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        kotari=0
        i = 0
        
        kot =[]

        while(i < len(nums)):
            if(nums[i]==1):
                kotari+=1
                
            else:
                kot.append(kotari)
                kotari=0

            i +=1
        kot.append(kotari)
        return max(kot)