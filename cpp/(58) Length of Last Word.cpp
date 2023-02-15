class Solution {
public:
    int lengthOfLastWord(string s) {
        stack <char> st;
        int count = 0, i = 0;
        while(i < s.size()){
            st.push(s[i]);
            i++;
        }
        while(st.top() == ' '){
            st.pop();
        }
        while(st.top() != ' ' && !st.empty()){
            count++;
            st.pop();
            if(st.empty()){
                break;
            }
        }
        return count;
    }
};
