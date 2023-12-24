class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int k=0,i = 0,j = n;
        vector<int> v(2*n);
        while (k < n*2){
            v[k++] = nums[i++];
            v[k++] = nums[j++];
        }

        return v;
    }
};