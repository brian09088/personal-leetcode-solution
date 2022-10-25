class Solution {
public:
    int maxArea(vector<int>& height) {
        int len=height.size();
        int area=0;
        int i=0;
        int j=len-1;
        while(i<j){
            int h = min(height[i],height[j]);
            int w = abs(i-j);
            if(h*w > area){
                area=h*w;}    
            height[i]<height[j] ? i++ : j--;
        }
        return area;
    }
};