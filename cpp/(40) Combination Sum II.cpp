class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
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
            if(i > s && candidates[i]==candidates[i-1]){
                continue;
            }
            if(target - candidates[i] >= 0){
                cur.push_back(candidates[i]);
                DFS(candidates,target-candidates[i],i+1,cur,ans);
                cur.pop_back();
            }
        }
    }
};
