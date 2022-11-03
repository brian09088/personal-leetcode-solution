class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
            
        vector<int> ans;
        unordered_map<string,int> dic;
        int len= words[0].size();
        int a = s.length(),b = words.size();
        for(const string& word : words){
            dic[word]++;
        }
        for(int i=0;i<len;i++){
            int cnt=0;
            unordered_map<string,int> omap = dic;
            for(int j=i;j<=a-len;j+=len){
                string cur = s.substr(j , len);
                omap[cur]--;
                if(omap[cur]>=0){
                    cnt++;
                }
                int start = j-b*len;
                if(start >= 0){
                    string pop = s.substr(start, len);
                    omap[pop]++;
                    if(omap[pop]> 0){
                        cnt--;
                    }
                }
                if(cnt==b){
                    ans.push_back(start+len);
                }
            }
        }
        return ans;
    }
};