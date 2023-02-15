class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int n = intervals.size(), cur = 0;

        //如果interval第一個區間沒有跟newInterval重疊，那就直接加進答案陣列
        while(cur < n && intervals[cur][1] < newInterval[0]){
            res.push_back(intervals[cur++]);
        }

        //這邊考慮如果重疊的情況，把newIntervals更新，加進去陣列
        while(cur < n && intervals[cur][0] <= newInterval[1]){
            newInterval[0] = min(newInterval[0],intervals[cur][0]);
            newInterval[1] = max(newInterval[1],intervals[cur][1]);
            ++cur;
        }
        res.push_back(newInterval);

        //如果都沒有發生重疊情形，那就把原始陣列慢慢加進去，反正不影響
        while(cur < n){
            res.push_back(intervals[cur++]);
        }
        return res;
    }
};
