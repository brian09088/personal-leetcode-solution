class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long target) {
        
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int k = j+1;
                int m = nums.size()-1;
                long a = target-nums[i]-nums[j];
                while(k < m){
                    if(nums[k] + nums[m] == a){
                        vector <int> v = {nums[i], nums[j], nums[k], nums[m]};
                        if(find(ans.begin(),ans.end(),v) == ans.end()){
                             ans.push_back(v);
                            }
                        k++;
                        m--;
                    }
                    else if(nums[k] + nums[m] > a){
                        m--;}
                    else{
                        k++;}
                    }
            }
        }
        return ans;
    }
};