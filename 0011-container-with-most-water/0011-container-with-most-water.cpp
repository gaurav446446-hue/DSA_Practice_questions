class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i =0;
        int j =n-1;
        int area = 0;
        while(i < j){
            int width = j-i;
            int c_height = min(height[i], height[j]);

            int c_area = c_height*width;

            area = max(c_area, area);
            if(height[i] < height[j]){
                i++;
                }
            else{
                j--;
            }

        }
        return area;
    }
};