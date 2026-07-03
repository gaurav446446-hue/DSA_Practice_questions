class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        if(n <= 1) return true;
        int  dropcount =0;
        for(int i=1; i<n; i++)
        {
            if(nums[i] < nums[i-1])
           { 
            dropcount +=1;
            if (dropcount > 1) return false;
           }
        }
        if(nums[0] < nums[n - 1]){
            dropcount++;
        }
        return dropcount<=1;
    }
};