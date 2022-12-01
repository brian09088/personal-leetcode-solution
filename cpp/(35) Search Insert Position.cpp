class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.back() < target){return nums.size();}
        int l=0;
        int r=nums.size();
        while(l<r){
            int mid = l+(r-l)/2;
            if(target > nums[mid]){
                l = mid+1;}
            else{r = mid;}
        }
        return r;
    }
};
