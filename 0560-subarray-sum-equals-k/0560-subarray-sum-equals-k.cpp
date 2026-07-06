class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mpp;
        int n = nums.size();
        int cnt =0;
        mpp[0] =1;
        int presum;
        for(int i =0; i<n; i++){
            presum += nums[i];
            int rem = presum - k;
            cnt += mpp[rem];
            mpp[presum]+=1;
        }
        return cnt;
    }
};