class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> temp(2*n);
        for(int i=0; i<n; i++)
        {
            temp[2*i] = nums[i];
            temp[2*i+1] = nums[i+n];
        }
        nums = temp;
        return nums;
    }
};