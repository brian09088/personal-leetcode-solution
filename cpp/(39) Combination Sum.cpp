class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> cur;
        vector<vector<int>> ans;
        std::sort(candidates.begin(),candidates.end());
        DFS(candidates,target,0,cur,ans);
        return ans;
    }
private:
    void DFS(vector<int>& candidates,int target,int s,vector<int>& cur,vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(cur);
            return;
        }
        for(int i = s;i<candidates.size();i++){
            if(candidates[i] > target){break;}
            cur.push_back(candidates[i]);
            DFS(candidates,target-candidates[i],i,cur,ans);
            cur.pop_back();
        }
    }
};
