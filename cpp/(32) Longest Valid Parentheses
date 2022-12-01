class Solution {
public:
    int longestValidParentheses(string s) {
        stack <int> st;
        int num = 0;
        st.push(-1);

        for(int i=0;i<s.length();i++){
            int t = st.top();
            if(t != -1 && s[i]==')' && s[t]=='(' ){
                st.pop();
                num = max(num,i-st.top());
            }
            else{
                st.push(i);
            }
        }
        return num;
    }
};
