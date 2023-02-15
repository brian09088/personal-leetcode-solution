class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> ans;

        for(auto a : intervals){
            if(ans.empty() || ans.back()[1] < a[0]){
                ans.push_back(a);
            }
            else{
                ans.back()[1] = max(ans.back()[1], a[1]);
            }
        }
        return ans;
    }
};
