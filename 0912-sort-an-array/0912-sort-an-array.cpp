class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int low =0;
        int high = nums.size()-1;
        qs(nums, low, high);
        return nums;

    }

private:
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
        int randomIndex = low + rand() % (high - low + 1);
        swap(nums[low], nums[randomIndex]);
        int pivot = nums[low];
        int i = low;
        int j = high;
        while(i < j)
        {
            while(i < high && nums[i] <= pivot )
            {
                i++;
            }

            while(j > low && nums[j] > pivot)
            {
                j--;
            }
            if(i<j)
            {
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    }
        

};