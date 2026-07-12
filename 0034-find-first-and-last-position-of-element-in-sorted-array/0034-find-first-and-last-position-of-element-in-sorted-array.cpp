class Solution {
    private: 
    int first(vector<int>& nums, int target){
        int first = -1;
        int low = 0, high = nums.size() -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                first = mid;
                high = mid-1;
            }
            else if ( nums[mid] > target ){
                high = mid - 1;}
            else{
                low = mid+1;
            }
        }  
        return first;
    }

    int last(vector<int>& nums, int target){
        int last = -1;
        int low =0, high = nums.size() -1;
        while(low <= high){
            int mid = (low+ high)/2;
            if(nums[mid] == target){
                last = mid;
                low = mid+1;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return last;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int fst = (first(nums, target));
        if(fst == -1) return {-1, -1};
        return {fst, (last(nums, target))};
              
    }
};