void merge(vector<int>& nums, int low, int mid,  int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low; i <= high; i++){
        nums[i] = temp[i - low];
    }
}

int pairs(vector<int>& nums, int low, int mid, int high){
    int cnt =0;
    int right = mid+1;
    for(int i =low; i <= mid; i++){
        while(right <= high && nums[i] > 2LL*nums[right])
            right++;
            cnt += (right-(mid+1));
    }
    return cnt;
}
int merge_sort(vector<int>& nums, int low, int high){
    int cnt = 0;
    if(low >= high) return cnt;
    int mid = (low+high)/2;
    cnt += merge_sort(nums, low, mid);
    cnt += merge_sort(nums, mid+1, high);
    cnt += pairs(nums, low, mid, high);
    merge(nums, low, mid, high);
    return cnt;
}
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n  = nums.size();
        return merge_sort(nums, 0, n-1);
        
    }
};