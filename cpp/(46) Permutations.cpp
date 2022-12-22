class Solution {
private:
    void dfs(vector<int>&nums, int pos , vector<vector<int>>& res){
        if(pos == nums.size()-1){
            res.push_back(nums);
            return;}
        //123經過第一輪的調換之後，會得到123、213、321(第一個數字和後面數字交換位置，包含第一個數字自己，也就是沒有調換)，接著123、213、321會進行第二輪交換，也就是第二個數字要和後面的數字交換位置，在第二輪中123會得到123、132兩個組合，213會得到213、231，321會得到321、312，接著第三輪其實就不用交換了，因為數列長度就只有3，於是解就全部出來了。就是123、132、213、231、321、312這六個
        for(int i=pos;i<nums.size();i++){
            swap(nums[pos],nums[i]);
            dfs(nums,pos+1,res);
            swap(nums[pos],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        dfs(nums,0,res);
        return res;
    }
};
