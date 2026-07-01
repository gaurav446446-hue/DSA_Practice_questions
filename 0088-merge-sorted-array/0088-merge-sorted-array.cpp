class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        int left = 0;
        int right = 0;
        while(left <= (m-1) && right <= (n-1))
        {
            if(nums1[left] <= nums2[right])
            {
                temp.push_back(nums1[left]);
                left++;
            }
            else
            {
                temp.push_back(nums2[right]);
                right++;
            }
        }
        while(left <= (m-1))
        {
            temp.push_back(nums1[left]);
            left++;
        }
        while(right <= (n-1))
        {
            temp.push_back(nums2[right]);
            right++;
        }
        nums1 =temp;
        

    }
};