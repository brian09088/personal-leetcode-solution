// Source : https://leetcode.com/problems/two-sum/
// Author : Brian SU
// Date   : 2022-10-18

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    int n=nums.size();    
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(nums[j]+nums[k]==target){
                return {j,k};}
            }
        }
        return {-1};
    }
};
