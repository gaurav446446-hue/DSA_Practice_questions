class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int low =0;
        int high = nums.size()-1;
        qs(nums, low, high);
        return nums;

    }
        
    void qs(vector<int>& nums, int low, int high)
    {
        if(low<high)
        {
            int partition = f(nums, low, high);
            qs(nums, low, partition-1);
            qs(nums, partition+1, high);
        }
    }

    int f(vector<int>& nums, int low, int high)
    {
        int pivot = nums[low];
        int i = low;
        int j = high;
        while(i < j)
        {
            while(nums[i] <= pivot && i <= high-1)
            {
                i++;
            }

            while(nums[j] > pivot && j >= low+1 )
            {
                j--;
            }
            if(i<j)
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        int temp = nums[low];
        nums[low] = nums[j];
        nums[j] = temp;
        return j;
    }
        

};