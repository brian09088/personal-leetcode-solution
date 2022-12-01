class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty()){return -1;}
        int left = 0;
        int right = nums.size()-1;
        int mid = 0;
        while(left < right){
            mid = (left + right)/2;
            if(target == nums[mid]){return mid;}
            if(nums[mid] > nums[right]){
                if(nums[left] <= target && target < nums[mid]){
                    right = mid;}
                else{left = mid + 1;}
            }
            if(nums[mid] < nums[right]){
                if(nums[mid] < target && target <= nums[right]){
                    left = mid + 1;}
                else{right  = mid;}
            }
        }
        return nums[left]==target? left : -1;
    }
};
