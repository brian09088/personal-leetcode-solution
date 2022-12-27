//創建hash table將排序後的字串表中
//以重組後的字串為value
//在find的時候，回傳其index，並依其index放到該放的群組中

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans; 
        vector<string> hash;
        vector<string>::iterator result;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            result=find(hash.begin(),hash.end(),temp);
            if(result!=hash.end())
            {
                ans[result-hash.begin()].push_back(strs[i]);
            }
            else
            {
                ans.push_back({strs[i]});
                hash.push_back(temp);
            }
        }
        return ans;
    }
};
