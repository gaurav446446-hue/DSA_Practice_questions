class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int cnt = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                cnt++;
                maxi = max(cnt, maxi);

            }
            else if (nums[i] == 0) {
                cnt = 0;
            }

        }
        return maxi;
        
    }
};