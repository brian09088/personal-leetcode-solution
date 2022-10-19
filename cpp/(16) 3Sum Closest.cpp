// Source : https://leetcode.com/problems/3sum-closest/
// Author : Brian SU
// Date   : 2022-10-19

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        int min;
        int ans = target;
        int d = INT_MAX;
        
        for(int i=0;i<len-2;i++){
            int j=i+1;
            int k=len-1;
            while(j<k){
                min = nums[i]+nums[j]+nums[k];
                if(nums[i]+nums[j]+nums[k]==target){
                    return target;
                }
                int diff = abs(target-min); 
                if(diff < d){
                    d = diff;
                    ans = min;}
                
                if(min > target){
                    k--;}
                else{
                    j++;}
            }
        }
        return ans;
    }
};
