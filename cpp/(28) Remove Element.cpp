// Source : https://leetcode.com/problems/remove-element/
// Author : Brian SU
// Date   : 2022-10-27

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] != val){
                nums[count++]=nums[i];       
            }
        }
        return count;
    }
};
