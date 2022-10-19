// Source : https://leetcode.com/problems/3sum/
// Author : Brian SU
// Date   : 2022-10-19

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<int> numSet(3);
        vector< vector<int> > a;
        sort(nums.begin(),nums.end());
        int sum;
        int len=nums.size();
        
        if(len<=2){
            return {};
        }
        
        for(int i=0;i<len-2;i++){
            sum = 0-nums[i];
            numSet[0] = nums[i];
            for(int j=i+1, k=len-1;j<k;){
                if(nums[j]+nums[k]==sum){
                    numSet[1]=nums[j++];
                    numSet[2]=nums[k--];
                    a.push_back(numSet);
                    while(j<k && nums[j]==nums[j-1]){
                        j++;}
                    while(j<k && nums[k]==nums[k+1]){
                        k--;}
                }
                else if(nums[j]+nums[k]<sum){
                    j++;}
                else{
                    k--;}
            }
            while(i<len-2 && nums[i+1]==nums[i]){
                i++;}
        }
        return a;
    }
};
