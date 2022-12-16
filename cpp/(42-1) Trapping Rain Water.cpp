# Two Pointers

class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0, left = 0, right = height.size()-1, n = height.size();
        while(left < right){
            int minimum = min(height[left] , height[right]);
            if(minimum == height[left]){
                left++;
                while(left < right && height[left] < minimum){
                    res += minimum - height[left++];
                }
            }
            else{
                right--;
                while(left < right && height[right] < minimum){
                    res += minimum - height[right--];
                }
            }
        }
        return res;
    }
};
