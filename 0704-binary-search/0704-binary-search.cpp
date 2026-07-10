int fx(vector<int>& nums, int low, int high, int target){
    if(low > high) return -1;

    int mid = low + (high - low)/2;

    if(nums[mid] == target) return mid;

    else if(nums[mid] < target) return fx( nums, mid+1, high, target);

    return fx(nums, low, mid-1, target);
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
       return fx(nums, 0, nums.size()-1, target);
    }
};