class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int>ans = {-1,-1};
        
        if(nums.size()){
            int left = 0;
            int right = nums.size(); 
            while(left < right){
                int mid = left + (right - left)/2;
                if(nums[mid] < target){left = mid+1;}
                else{right = mid;}
            }
            if(left>=nums.size() || nums[left]!=target){
                return ans;}
            else{ans[0]=left;}
            left = 0;
            right = nums.size();
            while(left < right){
                int mid = left + (right - left)/2;
                if(nums[mid] <= target){left = mid+1;}
                else{right = mid;}
            }
            if(nums[left-1] == target){ans[1]=left-1;}
        }
        return ans;
    }
};
