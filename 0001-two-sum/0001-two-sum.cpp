class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> mpp;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            int rem = target - nums[i];
            
            if(mpp.contains(rem))
            {
                return {mpp[rem], i};
            }
            else
            {
                mpp.emplace(nums[i], i);
            }
        }
        return {-1, -1};
        
    }
};