class Solution {
public:
    string simplifyPath(string path) {
        string ans;
        stack<string> st;
        
        // chaeck the raw path
        for(int i=0;i<path.size();++i){
            string temp = "";

            while(i < path.size() && path[i] != '/'){
                temp.push_back(path[i]);
                ++i;
            }

            if(temp == ".."){
                if(!st.empty()){
                    st.pop();}
            }
            else if(!temp.empty() && temp != "."){
                st.push(temp);
            }
        }
        // recombination
        while(!st.empty()){
            ans = '/' + st.top() + ans;
            st.pop();
        }

        if(ans.empty()){
            return "/";
        }
        else{
            return ans;
        }
    }
};
