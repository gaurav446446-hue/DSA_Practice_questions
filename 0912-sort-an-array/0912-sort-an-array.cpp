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
            while(i <= high-1 && nums[i] <= pivot )
            {
                i++;
            }

            while(j >= low+1 && nums[j] > pivot)
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