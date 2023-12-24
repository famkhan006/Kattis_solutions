class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        ranges::sort(nums);
        int n = nums.size() - 1;
        for(int i = n ; i >=2  ; i--){
            if(nums[i-2] + nums[i-1] > nums[i]){

                int peri = nums[i-2] + nums[i-1] +  nums[i];
                return peri;

            }
                
        }

        return 0;
    }
};