class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int seen = 0;
        while (left < right) {
            int width = right - left;
            int area = width * min(heights[right], heights[left]);
            seen = max(seen,area);
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return seen;
        
    }
};
