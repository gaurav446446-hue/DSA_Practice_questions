#include<algorithm>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for(int i = n-2; i>=0; i-- ){
            if(nums[i]<nums[i+1])
            {
                idx = i;
                break;
            }
        }
        if(idx == -1){
            int l = 0;
            int h = n-1;
            while(l<=h )
            {
                swap(nums[l], nums[h]);
                l++;
                h--;
            }
            return;
        }

        for(int j = n-1; j > idx; j--)
        {
            if(nums[j] > nums[idx])
            {
            swap(nums[idx], nums[j]);
            break;
            }
        }
        int l = idx + 1;
        int h = n-1;
        while(l<h )
            {
                swap(nums[l], nums[h]);
                l++;
                h--;
            }  
            return;      
    }
};